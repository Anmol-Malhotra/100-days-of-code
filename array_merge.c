//Merge two arrays.




#include<stdio.h>
int main()
{
    int n, i;          // For first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    int arr_first[n];
    printf("Enter %d numbers to be inserted in first array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr_first[i]);
    }
    printf("First array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr_first[i]);
    }

    int m, j;          // For second array
    printf("\nEnter the number of elements in second array: ");
    scanf("%d", &m);
    int arr_second[m];
    printf("Enter %d numbers to be inserted in second array: ", m);
    for (j = 0; j < m; j++)
    {
        scanf("%d", &arr_second[j]);
    }
    printf("Second array: \n");
    for (j = 0; j < m; j++)
    {
        printf("%d ", arr_second[j]);
    }
    
    int merged[n + m];   // Merging both arrays
    for (i = 0; i < n; i++)
    {
        merged[i] = arr_first[i];
    }
    for (j = 0; j < m; j++)
    {
        merged[n + j] = arr_second[j];
    }

    printf("\nMerged array:\n");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}