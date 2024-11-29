#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(){
    int pid();
    pid=fork();

    if(pid==0){
        printf("[child]: hello, world pid=%d\n", getpid());
    }
    else{
        printf("[Parent]: hello, world pid=%d\n", getpid());
    }
    
    //fork3
    int pid1, pid2;
    pid1=fork();
    if(pid1==0){
        printf
        ...
    }
    //시험빈출
    //위에서 pid1의 값은 무엇인가, 해당출력이 아닐 경우에는 
    //위에서 pid를 하나 더 늘릴경우에는 8번 출력됨(2의 승수대로)
    //별도의 통제를 두지 않을 경우에는 기하급수젓으로 발생
}
