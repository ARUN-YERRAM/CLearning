#include<stdio.h>
int main(){
    int n,r,original,reverse;
    printf("Enter number :");
    scanf("%d",&n);

    original==n;
    while(n>0){
        r=n%10;
        reverse=(reverse*10)+r;
        n=n/10;
    }
    if(original=reverse){
        printf("Palindrome number");}
    else{
        printf("Not Palindrome number");
    }
}
