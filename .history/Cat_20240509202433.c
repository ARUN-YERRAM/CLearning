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

    fd = open(argv[1],O_RDONLY);

    if(fd == -1){
        printf("\n File Not Found\n");
    }

    while(read(fd,&ch,1)){
        putchar(ch);
    } close(fd);
    return 0;
}