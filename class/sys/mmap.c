#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/type.h>
#include <sys/stat.h>
#include <sys/mman.h>

int main(int argc, char *argv[]){
    struct stat sbuf;
    char *p;
    int fd;

    if(argc<2){
        fprintf(stderr,"사용법: %s파일이름\n", argv[0]);
        exit(1);
    }
    fd = open(argv[1], O_RDONLY);
    if(fd==-1){
        perror("open");
        exit(1);
    }
    if(fstat(fd, &sbuf)==-1)
    {
        perror("fstat");
        exit(1);
    }
    p=mmap(0,sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
    if(p==)
    ...

}
