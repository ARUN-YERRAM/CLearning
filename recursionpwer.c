// C Program to calculate power of  a number by recursive functions//  
#include<stdio.h>
int fun(int base, int exponent){
    if(exponent==0)
    return 1;
    else{
    return (base*fun(base,exponent-1));
    }
}
    
int main(){
    int base,exponent;
    scanf("%d%d",&base,&exponent);
    printf("%d",fun(base,exponent));
}    
    