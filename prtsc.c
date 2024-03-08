#include<stdio.h>
int main(){
    int n,num,last,rev;
    printf("Enter number:");
    scanf("%d",&n);
    rev=0;
    num=n;
    while(n>0){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    if(num==rev){
        printf("%d is Palindrome no",num);
    }else{
        printf("%d is not Palindrome no",num);
    } 

    /* int n,i,prod;
    printf("Enter Number n:");
    scanf("%d",&n);
    prod=1;
    if(n!=0){
    for(i=1;i<=n;i++){
        prod=prod*i;
                    }
    printf("%d",prod);
    }  
    else{
        printf("0");
    }

        */
}