// C program to find roots of a quadratic equaion//
#include<stdio.h>
int main(){
    int a,b,c,d;
    float d1,r1,r2;
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        r1=-b+sqrt(d)/2*a;
        r2=-b-sqrt(d)/2*a;
        printf("%.2f,%.2f",r1,r2);
        }
    else if(d=0){
            r1=-b/2*a;
            r2=-b/2*a;
            printf("%.2f%.2f",r1,r2);
                    }
    else{
            printf("Roots are imaginary");
        }
    }
