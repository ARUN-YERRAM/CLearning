#include<stdio.h>

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     bubblesort(arr,n);
     printf("\nSorted array is:");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }

}