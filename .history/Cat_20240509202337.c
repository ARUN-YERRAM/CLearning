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
}