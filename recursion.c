#include<stdio.h>
int fact(int a){         //recursive functions//
    if(a<=1)
        return 1;
    else
        return a*fact(a-1);
            }
int main(){
    int a,b,result;
    printf("Enter number :");
    scanf("%d",&a);
    result=fact(a);
    printf("%d",result);
    return 0;
}