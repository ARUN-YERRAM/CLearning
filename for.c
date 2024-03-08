//To print Multiplication table of user input//
#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter Number n:");
    scanf("%d",&n);
    i=1;

    while(i<11){
                printf("%d*%d=%d\n",n,i,n*i);
                i=i+1;
               }

}       


