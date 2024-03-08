/*Write a C program that uses non recursive function to search 
a Key value in a given list of integers using linear search method.*/
#include<stdio.h>
int lsearch(int a[],int,int);
int main()
{
	int i,j,key,n;
	printf("Number of elements in the array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Element to be searched:");
	scanf("%d",&key);
	lsearch(a,n,key);
}
int lsearch(int a[],int n,int key)
{
	int  index=-1,i;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			index=i;
			break;
		}
	}
	if(index==-1)
		printf("%d not found\n",key);
	else
		printf("%d found at index %d\n",key,index);
}




