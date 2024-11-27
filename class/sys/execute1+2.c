#include<stdio.h>
int main(){
    printf("부모 프로세스 시작\n");
    if(fork()==0){
        execl("/bin/echo","echo","Hello",NULL);
        fprintf(stderr, "첫번째 실패\n");
        exit(1);
        /*
        if(fork()==0){
            execl("/bin/date", "date", NULL);
            fprintf(stderr, "두번째 실패\n");
            exit(2);
        }
        */
    }
    printf("부모 프로세스 끝\n");
}