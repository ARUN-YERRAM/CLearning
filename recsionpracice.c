#include<stdio.h>
int power(int base,int exponent){
    if(exponent==0){
        return 1;
    }
    else{
        return base*power(base,exponent-1);
    }
}

int main(){
    int base,exponent;
    scanf("%d%d",&base,&exponent);
    printf("%d^%d=%d",base,exponent,power(base,exponent));
}