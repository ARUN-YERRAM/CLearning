#include<stdio.h>
int main(){
   int  a[2][3][2]={5,10,15,20,25,30,35,40,45,50,55,60,65};
    int *p=&a,c=12;
    printf("%d\n",a);
    printf("%d\n",a[0]);
    printf("%u\n",a[0][0]);
    printf("%u\n",a[0][0][0]);
    printf("%d\n",a+1);
    printf("%d\n",a[0]+1);
    printf("%d\n",a[0][0]+1);
    printf("%d\n",&a+1);
    printf("%d %d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4),*(p+5));
    //int a[]={25,36,49,75,106,33,72,98};
    //int*p=&a[2];
    //printf("%d\n",*p);
    //printf("%d\n",++(*p));
    void*k;
    k=&c;
    printf("%d",&c);
    


    
}