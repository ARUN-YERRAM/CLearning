/*To swap two numbers using pointers and functions */
#include<stdio.h>
void swap(int*a,int*b){
    int temp =*a;
           *a=*b;
           *b=temp;
}

int main(){
    int num1,num2;
    printf("Enter Numbers a & b:");
    scanf("%d%d",&num1,&num2);
    swap(&num1,&num2);
    printf("a:%d,b: %d",num1,num2);
    return 0;
}




