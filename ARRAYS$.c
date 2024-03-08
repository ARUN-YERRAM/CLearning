#include<stdio.h>
int main(){
    int a[]={5,10,15,20,25,30,35,40,45,50,};
    int i;
    printf("%u\n",&a);


    for(i=0;i<9;i++){
        printf("a[%d]=%d\n",i,a[i]);
        printf("ADDRESS=%u\n",&a[i]);
        }

}