//Insert an element in a sorted array at the appropriate position.





#include<stdio.h>
int main()
{
    int n, i, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
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
    printf("\nEnter the number to be inserted: ");
    scanf("%d", &num);
    int position = n;
    for (i = 0; i < n; i++)
    {
        if (num < arr[i])
        {
            position = i;
            break;
        }
    }
    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = num;
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}