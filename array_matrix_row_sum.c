//Find the sum of each row of a matrix and store it in an array.



#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &columns);
    int a[rows][columns];
    int row_sum[rows];
    printf("Enter a %dX%d matrix:\n", rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        row_sum[i] = 0;
        for (int j = 0; j < columns; j++) 
        {
            row_sum[i] += a[i][j];
        }
    }
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) 
    {
        printf("Row %d sum = %d\n", i + 1, row_sum[i]);
    }
    return 0;
}