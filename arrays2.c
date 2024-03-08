// To Find the average and sum of given numbers//
#include<stdio.h>
int main(){
    long int i;
    int sum,n,arr[n];
    float avg;
   printf("Enter Number n:");
   scanf("%d",&n);
   printf("Enter  %d Numbers:\n",n);
   sum=0;
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    avg=sum/n;
   }
   printf("Entered Numbers are: ");
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   printf("\n");
   printf("Sum is:%d\n",sum);
   printf("Avg is:%.2f\n",avg);
}

