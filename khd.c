#include<stdio.h>
#include<string.h>

int main(){
    char str[]="HELLOWORLDa";
    int len = strlen(str);
    printf("THE length of string:%d\n",len);
    char str1[]="helloworlds";
    char str3[20];
    strcpy(str3,str);
    puts(str3);
    puts(str1);
    strcat(str,str3);
    puts(str);
    int l=strcmp(str,str1);
    printf("%d\n",l);
    strlwr(str);
    puts(str);
    strupr(str1);
    puts(str1);
}