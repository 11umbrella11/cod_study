#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    char name[10];
};
//padding~ 4byte 단위로 끊음..(녹음 참조)
int main(){
    struct student *ptr;
    int n, i;
    printf("몇명의 학생을 입력하시겠습니까");
    scanf("%d",&n );
    if(n<=0){
        fprintf(stderr, "오류: 학생수를 잘못 입력하셨습니다");
        fprintf(stderr, "프로그램을 종료합니다");
        exit(1);
    }
    ptr = (struct student *)malloc(n*sizeof(struct student));
    if(ptr==NULL){
        perror("malloc");
        exit(2);
    }
    printf("%d명의 학번과 이름을 입력하시오 \n", n);
    for(i=0; i<n;i++)
        scanf(%d %S\n",&ptr[i].id, ptr[i].name);
    
    printf("\n*학생 정보(역순)*\n");
    for(i=n-1;i>=0;i--)
        printf(%d %S\n",&ptr[i].id, ptr[i].name);

    printf("\n");
    exit(0);
}