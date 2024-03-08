#include<stdio.h>
int main(){
    int a[]={10,20,30,40,60};
    for(int i=4;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=100;
    for(int i=0;i<5;i++){
    printf("%d ",a[i]);
    }printf("\n");
    for(int i=1;i<4;i++){
        a[i]=a[i+1];
    } for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
        }