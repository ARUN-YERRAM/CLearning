//Write a C program to Insert an Element in an Array
/*Problem Solution
1. Declare a one-dimensional array of some fixed capacity.
2. Take size of the array as input from users
3. Define array elements, taking each element as input from users.
4. Get the number to be inserted.
5. Get the position where element needs to be inserted.
6. From that position shift all elements to one position forward.
7. Insert the element in that position.
8. Exit.
*/
#include<stdio.h>
int main(){
    int i,n,x,p;
    printf("Enter size n:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter number to be inserted and position:");
    scanf("%d %d",&x,&p);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    arr[p-1]=x;
    for(i=p;i<n+1;i++){
      //  for(int j=0;j<n-p;j++){
        arr[i]=arr[i+1];
           // }
        }
    for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }    
}
