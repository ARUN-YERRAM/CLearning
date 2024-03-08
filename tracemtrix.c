#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size, trace = 0;

    printf("Enter the size of the matrix (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }

    printf("The trace of the matrix is: %d", trace);

    return 0;
}
