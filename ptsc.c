#include<stdio.h>
int main(){
    int N,last;
    printf("Enter Number N:");
    scanf("%d",&N);

    while(N>0){
        last=N%10;
        if(last==7){
            printf("YES");
            break;
        }
        N=N/10;
        }
        if(last!=7)
        printf("NO");
    }
