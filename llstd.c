/*To print sum of numbers using recursive functions*/
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

