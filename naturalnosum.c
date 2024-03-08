//Write a c program to find out the sum of Natural Numbers Using Recursion
/*Sample Test Case
Input = 20
Output =
Sum = 210*/

#include<stdio.h>

int sumof(int b){
    if(b==0){
        return 0;
    }
    else{
        return b+sumof(b-1);
        }
}
int main(){
    int n,sum;
    scanf("%d",&n);
    sum=sumof(n);
    printf("Sum = %d",sum);
            }
