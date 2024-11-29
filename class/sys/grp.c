#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
    int pid;
    int i;

    for(i=0;i<3;i++)
        pid = fork();
        if(pid==0){
            printf("[%d]CHILD%d, is still alive...\n", getpgrp(),getpid());
            sleep(100);
            printf("[%d]CHILD%d, is still alive...\n", getpgrp(),getpid());
            return 0;
        }
         printf("[%d]PARENT%d, is still alive...\n", getpgrp(),getpid());
        sleep(100);
         printf("[%d]PARENT%d, is die...\n", getpgrp(),getpid());

}
//./grp &
//kill -9 1360053 부모를 죽임
//KILL -9 -1360053 일가족을 죽임