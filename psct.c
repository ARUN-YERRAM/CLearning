#include<stdio.h>
void fun(int n){
    if(n==0||n==1){
        printf("%d",n);
        return;
    }
    else{
        fun(n/10);
        printf("%d",n%10);
    }
}
int main(){
    int n;
    printf("Enter Number n:");
    scanf("%d",&n);
    fun(n);
}
