//Write a C programming to find out maximum and minimum of some values using function which will return an array.
/*Sample Test Case
Input=5
25 11 35 65 20
Output=
Minimum value is: 11
Maximum value is: 65
*/
#include<stdio.h>
int *min_max(int arr[],int n){
    static int result[2];
    int i;
    
    result[0]=arr[0];
    result[1]=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<result[0]){
            result[0]=arr[i];
        }
        if(arr[i]>result[1]){
            result[1]=arr[i];
        }
    }
    return result;
}

int main(){
    int n,i;
    int arr[100];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int *result=min_max(arr,n);
    
    printf("Minimum value is:%d\n",result[0]);
    printf("Maximum value is:%d\n",result[1]);
    return 0;
}



