 /*To Find Sum of Cubes of Every Digit of a given Number*/ 
#include<stdio.h>
int main(){

    int n,count,i,prod,last,sum,b,total;
    sum=0;
    prod=1;
    total=0;

    printf("Enter number :");
    scanf("%d",&n);

    if(n==0){
        printf("Sum of Cubes of Every Digit is 0");
            }
    else{  
        b=n;      
    while(n!=0){
        last=n%10;
        n=n/10;}
        prod=prod*last*last*last;
        sum=sum+prod;
        //prod=1;//  
        }
    
       printf("%d",sum);
        }
    

    


