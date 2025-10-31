//Add two matrices.



#include <stdio.h>
int main()
{
    int a_rows, a_columns;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &a_rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &a_columns);
    int a[a_rows][a_columns];
    printf("Enter a %dX%d matrix:\n", a_rows, a_columns);
    for (int i = 0; i < a_rows; i++)
    {
        for (int j = 0; j < a_columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < a_rows; i++)
    {
        for (int j = 0; j < a_columns; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int b_rows, b_columns;
    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &b_rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &b_columns);
    int b[b_rows][b_columns];
    printf("Enter a %dX%d matrix:\n", b_rows, b_columns);
    for (int i = 0; i < b_rows; i++)
    {
        for (int j = 0; j < b_columns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < b_rows; i++)
    {
        for (int j = 0; j < b_columns; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    int sum[a_rows][b_columns];
    if (a_rows != b_rows || a_columns != b_columns)
    {
        printf("Matrices can not be added.");
    }
    else
    {
        for (int i = 0; i < a_rows; i++) 
        {
            for (int j = 0; j < a_columns; j++) 
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("Sum of the two matrices:\n");
        for (int i = 0; i < a_rows; i++)
        {
            for (int j = 0; j < a_columns; j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}