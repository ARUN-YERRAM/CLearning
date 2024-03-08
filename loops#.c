#include<stdio.h>
int main(){

    int i,sum,prod;
    sum=0;
    prod=1;

    for(i=1;i<11;i++){

        sum=sum+i;
        printf("[%d] ",sum);
        prod=prod*i;
        printf("[%d]\n",prod);
     }
     
      return 0;
}