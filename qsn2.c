#include<stdio.h>
int main(){
    printf("enter marks of evey subject\n");
    int a,b,c,d;
    float e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=((a+b+c+d)*100)/400;
    if (e<40)
    printf("Fail %f",e);
    else if(e>=40 && e<60)
    printf("Second class %f",e);
    else if(e>=60 && e<70)
    printf("First class %f",e);
    else if (e>=70)
    printf("First class with distinction %f",e);
}