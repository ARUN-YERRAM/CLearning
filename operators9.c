#include<stdio.h>
void main(){
    int a=0,b=1;
    a=(a=5)||(b=0);
    printf("%d\n",a);
    printf("%d\n",b);

}