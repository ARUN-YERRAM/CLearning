#include<stdio.h>
void main(){

    int a,b,sum;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum of %d and %d is %d\n",a,b,sum);
    sum++;
    printf("%d\n",sum);
    --sum;
    printf("%d\n",sum);
    ++sum;
    printf("%d\n",sum);
    sum--;
    printf("%d\n",sum);
    if(sum>50){
    printf("sum is greater than %d",sum);}
    else{
    printf("sum is less than 50");}
    return;
}



