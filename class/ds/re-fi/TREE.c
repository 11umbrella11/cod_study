#include <iostream>
#include <stack>
#MAX_STACK_SIZE 100
#MAX_QUEUE_SIZE 100

//4.iterative inorder traversal
void iter_inorder(struct node *node){
    // 중위 순회 
    int top = -1;
    struct node *stack[MAX_STACK_SIZE];
    for(;;){
        for(;node;node=node->left_child)
            push(node);
        node = pop();                       //pop구현
        if(!node) break;
        printf("%d", node->data);
        node=node->right_child;
    }
}

//5 level order traversal
void level_order(struct node *ptr)
{ // 큐를 이용하여 level 순서대로 이진 트리 순회
    int front = 0, rear = 0; // 큐의 초기화
    struct node *queue[MAX_QUEUE_SIZE];
    if (!ptr) return; // empty tree
        addq(ptr);                                   //addq 구현
    for ( ; ; ) 
    {
    ptr = deleteq();                                //deleteq 구현
    if (ptr == NULL) break; // queue empty
    printf("%d", ptr->data); // 현재 노드의 data 출력
    if (ptr->left_child) // left child 저장
        addq(ptr->left_child);
    if (ptr->right_child) // right child 저장
        addq(ptr->right_child);
    } 
}

//6. 이진트리 복사
tree_pointer copy(struct node *original)
    { // original 트리를 복사한 새로운 이진 트리를 반환
    struct node *temp;
    if (original) {
        temp = (struct node *) malloc(sizeof(struct node));
        temp->left_child = copy(original->left_child);
        temp->right_child = copy(original->right_child);
        temp->data = original->data;
        return temp;
        }
    return NULL;
    }

//7. 이진트리의 동일성 검사
int equal(struct node *first, struct node *second)
{
/* first와 second 트리가 다를 경우 FALSE를 반환. 
트리가 동일할 경우, TRUE를 반환 */
    return ((!first && !second) || (first && second &&(first->data == second->data) &&
    equal(first->left_child, second->left_child) &&equal(first->right_child, second->right_child)));
}

//+이진트리의 노드 계산
int get_node_count(struct node *ptr)
{
    int count = 0
    if (ptr != NULL)
        count = 1 + get_node_count(ptr->left_child) + get_node_count(ptr->right_child);
    return count;
}

//+단말 노드수 계산

int get_leaf_count(struct node *ptr)
{
    int count = 0;
    if (ptr != NULL) {
        if (ptr->left_child == NULL && ptr->right_child == NULL) // 단말 노드
            return 1;
        else count = get_leaf_count(ptr->left_child) + get_leaf_count(ptr->right_child);
    }
    return count;
}

//9.만족성 알고리즘
void post_order_eval(struct node *node)
{
// 논리식 트리를 계산하기 위한 postorder()의 변형
if (node) {
    post_order_eval(node->left_child); // 왼쪽 서브트리 계산
    post_order_eval(node->right_child); // 오른쪽 서브트리 계산
    switch(node->data) {
        case not: node->value = !node->right_child->value;
                break;
        case and: node->value = node->left_child->value &&
                node->right_child->value;
                break;
        case or: node->value = node->left_child->value || node->right_child->value;
                break;
        case true: node->value = TRUE; break; // 단말 노드
        case false: node->value = FALSE; // 단말 노드
} } }

//10. 한 노드의 inorder successor찾기

struct thread_tree *insucc(struct thread_tree *ptr)
{
    /* Threaded binary tree에서 ptr이 가리키는 노드의 inorder successor를 return */
    struct thread_tree *temp = ptr->right_child;
    if (!ptr->right_thread)// right_child가 child pointer
        while (!temp->left_thread) // 왼쪽 끝까지 가자
            temp = temp->left_child;
    return temp;
}

//11. inorder traversal
void tinorder (struct thread_tree *tree)
{
// Threaded binary tree를 inorder traversal
    struct thread_tree *temp = tree;
    for ( ; ; ) {
    temp = insucc(temp);
    if (temp == tree)
        break;
    printf("%3c", temp->data);
    }
}

//12.parent의 오른쪽에 추가

void insert_right(struct thread_tree *parent, struct thread_tree *child)
{ // Threaded binary tree에서 parent의 오른쪽에 child 추가
    struct thread_tree *temp;
    child->right_child = parent->right_child; // child의
    child->right_thread = parent->right_thread; // 정보부터
    child->left_child = parent; // 변경
    child->left_thread = TRUE; // 하자. 
    parent->right_child = child;
    parent->right_thread = FALSE; // child가 존재하므로 thread는 false
    if (!child->right_thread) {
        temp = insucc(child); // parent의 원래 successor를 찾아서
        temp->left_child = child; // 새로운 predecessor로 변경
} }

//13.insert max_heap
void insert_max_heap(element item, int *n)
{
// 노드 수가 *n인 max heap에 item 값을 추가
    int i;
    if (HEAP_FULL(*n)) {
        fprintf(stderr, "The heap is full. \n");
        exit(1);
    }
    i = ++(*n);
    while ((i != 1) && (item.key > heap[i/2].key)) 
    {
    heap[i] = heap[i/2]; // parent의 값을 아래로 이동
    i /= 2; // 한 레벨 위로 이동
    }
    heap[i] = item;
 }

 //14. delete_max_queue
 element delete_max_heap (int *n)
{
    int parent, child;
    element item, temp;
    if (HEAP_EMPTY (*n)) 
    {
     fprintf(stderr, "The heap is empty\n"); 
     exit(1); 
     }
     item = heap[1];
    temp = heap[ (*n)-- ]; // 제일 마지막 원소를 비교 대상으로…
    parent = 1; 
    child = 2;
     // root node부터 시작
    while (child <= *n) 
    {
    if ((child < *n) && (heap[child].key < heap[child+1].key))
        child++; // 두 개의 children 중에 큰 쪽과 비교
    if (temp.key >= heap[child].key) break; // 더 이상 내려갈 필요없음
    heap[parent] = heap[child]; // child의 데이터를 위로 이동
    parent = child; // 아래로 내려가자
    child *= 2;
    }
    heap[parent] = temp;
    return item;
}
//15. recursive search

struct node *search (struct node *root, int key)
{
// key를 포함하고 있는 노드의 포인터를 return
// 해당되는 노드가 없을 경우, return NULL.
// Recursive version
    if (!root) return NULL;
        if (key == root->data) return root;
        if (key < root->data)
            return search (root->left_child, key);
        return search (root->right_child, key);
}

