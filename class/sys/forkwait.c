#include<unistd.h>

int main(){
    int pid, child, status;
    printf("[%d]부모프로세스 시작:\n", getpid());
    pid=fork();
    if(pid==0){
        printf("[%d]자식프로세스 시작:\n", getpid());
        exit(1);
    }
    child = wait(&status);
    printf([%d]자식프로세스 %d종료:\n", getpid(), child);
    printf("\n종료코드 %d \n", status>>8);
}