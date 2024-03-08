#include<stdio.h>
int main(){
    int i,arr[5];

    printf("Enter Elements of Array:\n");
    for(i=0;i<5;i++){
        scanf("%d\n",&arr[i]);
       // printf("%d\n",arr[i]);
    }
    printf("[");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);

    }
    printf("]");
    return 0;
}