#include<stdio.h>
int main(){
    int row,space,star,n;
    printf("Enter number n:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
    
        for(space=1;space<=n-row;space++){
            printf(" ");
        }
        for(star=1;star<=row;star++){
            printf("*");

        }
        printf("\n");

    }
}