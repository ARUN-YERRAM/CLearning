#include<stdio.h>
int main(){
    int n,r=0;
    scanf("%d",&n);
   // r=n;
    while(n>0){
    int r=0;
    r=r+n%10;
    n=n/10;
}
printf("%d",r);
    return 0;
}