#include<sys.types.h>

itn main(){
    int pid1, pid2,child, status;

    printf("[%d]부모프로세스 시작:\n", getpid());
    pid=fork();
    if(pid1==0){
        printf("[%d]자식프로세스[1] 시작:\n", getpid());
        sleep(1);
        printf("[%d]자식프로세스[1] 종료:\n", getpid());
        exit(1);
    }
    pid2=fork();
    if(pid2==0){
        printf("[%d]자식프로세스[2] 시작:\n", getpid());
        sleep(2);
        printf("[%d]자식프로세스[2] 종료:\n", getpid());
        exit(2);
    }
    child = waitpid(pid1, &status, 0);
    printf("[%d]자식프로세스[1] %d 종료:\n", getpid(), child);
    printf("\n종료코드\n", status>>8);
}