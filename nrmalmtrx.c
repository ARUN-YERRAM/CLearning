#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 10 

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the matrix (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // calculate the normal vector of the matrix
    int normal[MAX_SIZE] = {0};
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            normal[i] += matrix[i][j] * matrix[size-1][j];  // compute dot product with last row
        }
    }
    // normalize the normal vector
    double norm = 0;
    for (int i = 0; i < size; i++) {
        norm += normal[i] * normal[i];
    }
    norm = sqrt(norm);
    for (int i = 0; i < size; i++) {
        normal[i] /= norm;
    }

    printf("The normal vector of the matrix is: (");
    for (int i = 0; i < size; i++) {
        printf("%d", normal[i]);
        if (i < size-1) {
            printf(", ");
        }
    }
    printf(")");

    return 0;
}
