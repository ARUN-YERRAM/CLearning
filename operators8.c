#include<stdio.h>
void main(){
    int a=1,b=-1,c=0,d;
    d=--a||--b&&--c;
    printf("%d%d%d%d",a,b,c,d);
}
