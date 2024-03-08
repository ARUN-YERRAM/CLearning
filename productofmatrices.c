#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1, c1, r2, c2;
    int i, j, k;
    int sum;
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &c1);
    int matrix1[r1][c1];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter number of rows for second matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2)
    {
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    }
    else{
    int matrix2[r2][c2];
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int result[r1][c2];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            sum = 0;
            for (k = 0; k < c1; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }
    printf("Product of entered matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
        }
}  
