//Check if a matrix is symmetric.



#include <stdio.h>
int main()
{
    int size;
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &size);
    int a[size][size];
    int isSym = 1;
    printf("Enter a %dX%d matrix:\n", size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a[i][j] != a[j][i]) {
                isSym = 0;
                break;
            }
        }
        if (!isSym) break;
    }
    if (isSym)
        printf("It is a symmetric matrix.\n");
    else
        printf("It is not a symmetric matrix.\n");

    return 0;
}