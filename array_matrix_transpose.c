//Find the transpose of a matrix.



#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &columns);
    int a[rows][columns];
    int t[columns][rows];
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
        for (int j = 0; j < columns; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < columns; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}