#include <stdio.h>

int main() {
   int n, i;
   printf("Enter the size of array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements of array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   int max = arr[0], secMax = arr[0];
   for (i = 0; i < n; i++) {
      if (arr[i] > max) {
         secMax = max;
         max = arr[i];
      } else if (arr[i] > secMax && arr[i] < max) {
         secMax = arr[i];
      }
   }

   printf("The second maximum element in the array is %d\n", secMax);

}