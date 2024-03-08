#include<stdio.h>
float value();
void main(){
    float tsum;
    printf("%f",tsum);
}
float value(){
    float rate=0.12,amount=5000;
    int range=5,year;

    for(year=1;year<range;year++){
        amount=amount*(1+0.12);
    }
    return amount;
}

