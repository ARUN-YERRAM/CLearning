#include<stdio.h>

int getLargest(int arr[], int size) {
int i, max = arr[0];
for (i = 1; i < size; i++) {
if (arr[i] > max)
max = arr[i];
}
return max;
}

int main() {
int size, i;
printf("Enter the size of the array: ");
scanf("%d", &size);
int arr[size];
printf("Enter %d elements of the array: \n", size);
for (i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
int largest = getLargest(arr, size);
printf("The largest element in the array is: %d", largest);
return 0;
}
