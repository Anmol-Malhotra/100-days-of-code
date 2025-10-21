//Count positive, negative, and zero elements in an array.



#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers to be inserted in the array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You entered: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int positive_count = 0, negative_count = 0, zero_count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_count++;
        }
        else if (arr[i] < 0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
    }
    printf("\nPositive = %d\nNegative = %d\nZero = %d", positive_count, negative_count, zero_count);
    return 0;
}