#include<stdio.h>
#include<stdlib.h>
    void main(){
        int *ptr=NULL;
        int n,i;
        printf("Enter no of elaments:\n");
        scanf("%d",&n);
        printf("No of Elements=%d\n",n);
        ptr=(int*)malloc(n*sizeof(int));
        if(ptr==NULL){
            printf("Memory not allocated");
            exit(0);
        }
        else{
            printf("Memory successfully allocated\n");
            for(i=0;i<n;i++){
                ptr[i]=i+1;
            }
        
printf("The elements are:\n");
for(i=0;i<n;i++){
    printf("%d ",ptr[i]);
    }
        }
           }