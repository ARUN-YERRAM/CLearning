#include<stdio.h>
int main(){
    int i,n,j,k;
    int arr[2][2][3];
   // printf("Enter Number n:");
    //scanf("%d",&n);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
        scanf("[%d]\n",&arr[i][j][k]);
            }
        }
    }
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        for(k=0;k<3;k++){
            printf("%d\n",arr[i][j][k]);
        }
    }

}
}