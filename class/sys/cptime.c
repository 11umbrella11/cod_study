#include<sys/types.h>
#include<sys/stat.h>
#include<sys/time.h>
#include<stdio.h>
#include<stdlib.h>
#include<utime.h>

int main(int argc, char *argv[]){
    struct stat buf;
    struct utimbuf time;

    if(argc < 3){
        fprintf(stderr, "사용법: CPTIME FILE1 FILE2 \N");
        exit(1);
    }
    if(stat(argv[1], &buf)<0){
        perror("stat()");
        exit(-1);
    }
    time.actime=buf.st_atime;
    time.modtime=buf.st_mtime;

    if(utine(argv[2], &time))
        perror("utime");
    else exit(0);
}