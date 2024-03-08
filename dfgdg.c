#include<stdio.h>
int maxmin(int arr[],int n,int*min,int*max){
    int i;
    *max=*min=arr[0];
 
    for(i=1;i<n;i++){
    if(arr[i]>*max){
        *max=arr[i];
    }
    if(arr[i]<*min){
        *min=arr[i];  }
}         
    }
    int main(){
        int n,arr[n];
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);  }
            int min,max;
        maxmin(arr,n,&min,&max);
        printf("Minimum valus is:%d",min);
        printf("Maximum value is:%d",max);
        return 0;
}