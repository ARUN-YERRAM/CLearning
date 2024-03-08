#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
     }
  }
