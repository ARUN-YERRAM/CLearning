/*To print max and min of the elements in array*/
#include<stdio.h>
void minMax(int arr[], int n, int *min, int *max) {
  *min = *max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > *max)
      *max = arr[i];
    if (arr[i] < *min)
      *min = arr[i];
  }
}

int main() {
  int n,i;
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:");
  for (int i = 0; i < n; i++){
  scanf("%d", &arr[i]);}
  int min, max;
  minMax(arr, n, &min, &max);
  printf("Minimum value is: %d\n", min);
  printf("Maximum value is: %d\n", max);
  return 0;
}

