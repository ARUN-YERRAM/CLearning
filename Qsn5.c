// To find whether given no is Armstrong no or not//
#include<stdio.h>
int main(){
    int a,b,n,sum,prod,i,last,count;
    sum=0;

    printf("Enter number:");
    scanf("%d,&n");
    a=n;
    count=0;
    while(n!=0){
            n=n/10;
            count++; 
        }
     printf("%d",count);  
        prod=1;
       while(n!=0){
            last=n%10;
            n=n/10;
            for(i=1;i<=count;i++){
                prod=prod*last;
                sum=sum+prod; 
            }
        }              
        if(sum==a){
            printf("%d is Armstrong no",n);}
        else{
            printf("Not Armstrong no");
            }
}  
             

        






        
