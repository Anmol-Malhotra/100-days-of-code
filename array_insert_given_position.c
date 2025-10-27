//Insert an element in an array at a given position.




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
    printf("Enter the postion for the number(0 to %d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n)
    {
        printf("Invalid Position.");
        return 1;
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