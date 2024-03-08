 /*To find Whether Given no is strong no or not*/
#include<stdio.h>
int main(){
    int n,prod,sum,i,a,last;
    printf("Enter number:");
    scanf("%d",&n);

    a=n;
    sum=0;
    while(n!=0){
        last=n%10;
        n=n/10;
        prod=1;
        for(i=1;i<=last;i++){
            prod=prod*i;
        sum=sum+prod;
            }
        }
    if(sum==a){
        printf("%d is Strong no",a);
      }
    else{
        printf("%d is not Strong no",a);
    }

    return 0;
    }