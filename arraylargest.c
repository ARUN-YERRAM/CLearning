//Write a program in C to get largest element of an array using the function.
/*Sample Test Case
Input = 5                                                    
1 2 3 4 5                                                                                              
Output =
The largest element in the array is : 5
*/
#include<stdio.h>

int larger(int size,int arr[]){
        int max=arr[0];
        for(int i=1;i<size;i++){
            if(arr[i]>max)
                max=arr[i];
        }  
    return max;
}
            int main(){
                int size,largest;
                int arr[size];
                scanf("%d",&size);
                for(int i=0;i<size;i++){
                    scanf("%d",&arr[i]);}
                largest=larger(size,arr);
                printf("The largest element in the array is : %d",largest);
                
            }