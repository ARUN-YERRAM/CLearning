#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int arg,char*argv[]){
    int fd;
    char ch;
    fd = open(argv[1],O_RDONLY);

    if(fd == -1){
        printf("\n File Not Found\n");
    }

    while(read(fd,&ch,1)){
        putchar(ch);
    } close(fd);

    int fd1 = open(argv[2],O_RDONLY);

    if(fd1 == -1){
        printf("\n File Not Found\n");
    }

    while(read(fd1,&ch,1)){
        putchar(ch);
    } close(fd1);
    return 0;
}