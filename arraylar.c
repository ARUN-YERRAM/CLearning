//To find largest Element in the Array//
#include <stdio.h>
int findLargest(int arr[], int size) {              /*logic*/
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];                                                                   
        }
    }
    return max;
}
int main() {
    int size, largest;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    largest = findLargest(arr, size);
    printf("Largest element in the array: %d\n", largest);
    return 0;
}
