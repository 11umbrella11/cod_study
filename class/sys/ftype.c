#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    int i;
    struct stat buf;
    for(i=1;i<argv[i];i++){
        if(lstat(argv[i], &buf)<0){
            perror("lstat()");
            continue;
        }
        if(S_ISREG(buf.st_mode))
            printf("%s |n", "일반파일");
        if(S_IDIR(buf.st_mode))
            printf("%s |n", "디렉터리");
        if(S_ISCHR(buf.st_mode))
            printf("%s |n", "문자 장치 파일"); 
        if(S_ISFIFO(buf.st_mode))
            printf("%s |n", "FIFO파일")           
    }
    exit(0);
}