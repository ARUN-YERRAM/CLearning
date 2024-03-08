#include<stdio.h>
/*void main(){
    int *p;
    p=fun();
    printf("%d",*p);
}
int* fun(){
    static int a=10;
   // int*q=&a;
    return &a;
}*/
/*int main(){
int *p = malloc(4*5);
for(int i=0;i<5;i++){
scanf("%d",p+i);
}
for(int i=0;i<5;i++){
    printf("%d\n",p[i]);
}
}*/
/*int main(){
    int n;
    int i,*p;
printf("Enter number N:");
scanf("%d",&n);
p=malloc(sizeof(int)*n);
if(p!=NULL){
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
    for(int i=0;i<n;i++)
        printf("%d\n",p[i]); 
            }
} */

int main(){
    int a[10]={10,10,20,20,30,30,40,40,5};
    int x=0,n,i;
    for(int i=0;i<10;i++){
        x=x^a[i];
    }
    printf("%d",x);
}