#include<stdio.h>
int main(){

    int a[2][3][3]={5,15,25,35,45,55};
    printf("%u\n",a);
    printf("%d\n",&a);
    printf("%d\n",a[0]);
    printf("%d\n",a[0][0]);
  
    printf("%d\n",a+1);
    printf("%d\n",&a+1);
    printf("%d\n",a[0][0]+1);
    printf("%d\n",a[0][0][0]+1);
}