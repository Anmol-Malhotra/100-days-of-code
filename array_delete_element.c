//Delete an element from an array.




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
    int position = n;
    printf("\nChoose the element to be deleted(0 to %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position > n)
    {
        printf("Invalid Position.");
        return 1;
    }
    for (i = position; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}