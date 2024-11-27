#include <stdio.h>
#include <unistd.h>

int main(){
    int pid, ppid;
    printf("[before]Parent process: %d, current process: %d\n", getppid(), getpid() );
    //앞서 FORK를 실행시키기위해서는 부모 주소가 필요
    //FORK가 실행되면 명령어가 실행된 시점부터 복사가 진행됨
    pid=fork();
    printf("[after]Parent process: %d, current process: %d, return: %d\n", getppid(), getpid(), pid);
    return 0;
}