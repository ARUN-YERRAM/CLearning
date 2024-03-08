#include<stdio.h>
#include<string.h>
   unsigned int mystrlen(const char*str){
    unsigned int count=0;
     while((*str)!='\0'){
        count++;
        str++;
        }
        return count;
 }
    int main(){     
        int i;
        char*ptr;
        printf("Enter a string:");
        scanf("%s",ptr);
        i=mystrlen(ptr);
        printf("THE LENGTH of %s is %d",ptr,i);
        return 0;
        }