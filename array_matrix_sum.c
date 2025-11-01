//Find the sum of all elements in a matrix.



#include <stdio.h>
int main()
{
    int rows, columns, sum = 0;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &columns);
    int a[rows][columns];
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
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("Sum of all the elements of the matrix: %d", sum);
}