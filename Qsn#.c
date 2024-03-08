 /*To Check Whether given no is Perfect no or not*/
#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter number n:");
    scanf("%d",&n);
    
    sum=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
            printf("%d\n",i);
                 }
    }
    if(sum==n){
        printf("%d is Perfect number",n);
    }             
    else{
        printf("%d is Not Perfect numnber",n);
    }
     }
    
