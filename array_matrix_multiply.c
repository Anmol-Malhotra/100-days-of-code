//Multiply two matrices.



#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    printf("Enter a %dX%d matrix:\n", rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("First matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int rows_1, columns_1;
    printf("Enter number of rows: ");
    scanf("%d", &rows_1);
    printf("Enter number of columns: ");
    scanf("%d", &columns_1);
    int matrix_1[rows_1][columns_1];
    printf("Enter a %dX%d matrix:\n", rows_1, columns_1);
    for (int i = 0; i < rows_1; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("Second matrix: \n");
    for (int i = 0; i < rows_1; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            printf("%d ", matrix_1[i][j]);
        }
        printf("\n");
    }
    if (columns != rows_1)
    {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 0;
    }
    int result[rows][columns_1];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            for (int k = 0; k < columns; k++)
            {
                result[i][j] += matrix[i][k] * matrix_1[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns_1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}