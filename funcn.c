#include<stdio.h>
void linearsearch(int[],int,int);
int main(){
        int n,key;
        printf("Enter number n:");
        scanf("%d",&n);
        int arr[n];

        printf("Enter no of Elements of Array:");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter key to be searched:");
        scanf("%d",&key);

        linearsearch(arr,n,key);
}

void linearsearch(int arr[],int n,int key){
            int i,flag=0;
            for(i=0;i<n;i++){
                if(arr[i]==key){
                    flag=1;
                    break;
                }
            }

            if(flag==1){
                printf("The position of %d element is at %d",key,i+1);
            }
            else{
                printf("The element is not found");
            }
}