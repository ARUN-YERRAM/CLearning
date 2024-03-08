/*Write a C program that sorts the given array of integers 
using insertion sort in ascending order*/
#include<stdio.h>
void insertionSort(int [],int n);
int main()
{
	int n,i;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	insertionSort(arr,n);
	return 0;
}

void insertionSort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j=i-1;
		while(temp<arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("Array elements in ascending order:\n");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
}