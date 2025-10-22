//Find the second largest element in an array.



#include<stdio.h>
#include<limits.h>
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Need at least two elements to find the second largest.\n");
        return 1;
    }
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
    int largest = arr[0];
    int second_largest = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == INT_MIN)
    {
        printf("\nNo second largest element found (all elements may be equal).\n");
    }
    else
    {
        printf("\nSecond largest element is: %d\n", second_largest);
    }

    return 0;
}