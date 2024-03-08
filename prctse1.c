#include<stdio.h>
int a=10;
void fun(int a,int b){
    printf("ARUN");
}
int main(){
    int arr[]={10,20,30,40,50};
    int b=15;
    printf("%d\n",a+b);
    printf("[%d %d %d]\n",a-b,a%b,a*b);
    printf("%d %d",arr[0],arr[1]%arr[2]);

}