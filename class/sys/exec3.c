#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
    int child, pid, status;

    pid = fork();
    if(pid==0){
        execvp(atrgv[1], &argv[1]);
        fprintf(stderr, "%실행불가..)
        .
        .
        .
        
    }
}