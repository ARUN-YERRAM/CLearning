 /*To find no of factors and print factors of given no*/ 
#include<stdio.h>
int main(){
    int n,i,count;
    printf("Enter Number n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            count++;         
        }
    }
    printf("THE No Of FACTORS Of %d Are %d",n,count); 
}
