#include<stdio.h>

void slctnsort(int arr[],int n){
    int min,t;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;      
    t=arr[min];
    arr[min]=arr[i];
    arr[i]=t;
        
    }
  }
}
int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
slctnsort(arr,n);

printf("Elements of array of sorting:");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
             }
}
 

