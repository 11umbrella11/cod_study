#include <stdio.h>
#include <unistd.h>

int main(){
    int pid, ppid;
    printf("[before]Parent process: %d, current process: %d\n", getppid(), getpid() );
    pid=fork();
    printf("[after]Parent process: %d, current process: %d, return: %d\n", getppid(), getpid(), pid);
    return 0;
}