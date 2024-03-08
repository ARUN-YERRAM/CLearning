#include<stdio.h>
int main(){
    int n=4;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    printf("arr[%d][%d]=",i,j);
    scanf("%d",&arr[i][j]);                
                    }
        }
    printf("Original matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
            }    
            printf("\n");
        }

     int arr1[n][n];
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            arr1[j][n-1-i]=arr[i][j];
        }
     }   
     printf("Rotate 90 degree matrix:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
     }
}