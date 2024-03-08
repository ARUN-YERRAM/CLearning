#include <stdio.h>
#include<stdlib.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &columns);
    int matrix1[rows][columns];
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("Matrix1[%d][%d]=",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    int matrix2[rows][columns];
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("Matrix2[%d][%d]=",i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    int sum[rows][columns];
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
