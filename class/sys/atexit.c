#include <stdio.h>
static void exit_handler1(void), exit_handler2(void);
int main(int argc, char *argv[]){
    if(atexit(exit_handler1)!=0)
        perror("exit_handler1등록할 수 없음");
    if(atexit(exit_handler2)!=0)
        perror("exit_handler2등록할 수 없음");
    printf("main끝\n");
    exit(0);
}