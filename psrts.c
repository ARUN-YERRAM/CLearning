#include<stdio.h>
/*int main(){                                       //functions//
    int a[4]={10,20,30,40};
    fun(a);
    printf("%d %d %d",a[0],a[2],a);
}
void fun(int*p){
    p;
}   */

void main(){
    int a[2][3]={10,20,30,40,50,60};
    sum(a,6);
}
void sum(int*p,int n){
    int s=0;
    for(int i=0;i<n;i++){
    s=s+p[i];}printf("%d\n",s);
    for(int i=0;i<6;i++)
    printf("%d ",p[i]);
    
}