#include<stdio.h>
int main(){
    int r1,r2,c1,c2,i,j,k;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int n1[r1][c1],n2[r2][c2];
    if(c1==r2){
        printf("Enter Numbers of First Matrix:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&n1[i][j]);
            }
        }
        printf("Enter Numbers of Second Matrix:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&n2[i][j]);
            }
        }
    int mul[r1][c2];
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                mul[i][j]=0;
               for(k=0;k<c1;k++){
                mul[i][j]+=n1[i][k]*n2[k][j];
               } 
            printf("\n");
            }
        }
    }
        else{
            printf("Matrix Multiplication is not possible");
                 }
        }
    
    

