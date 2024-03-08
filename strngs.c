#include<stdio.h>
#include<string.h>
int main(){
    int a;
    char str1[]="ARRAN";
    a=strlen(str1);
    printf("%d\n",a);
    int i=0,j=a;
    for(i=0,j=a-1;i<a,j>=0;i++,j--)
        if(str1[i]=str1[j]){
            printf("PALINDROME "); 
            break;}
        else{
            printf("NOT PALINDROME");
            break;
         }   
        }

    
