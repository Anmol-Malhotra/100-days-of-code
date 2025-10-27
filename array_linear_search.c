//Search for an element in an array using linear search.




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
    int search, found = 0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (search == arr[i])
        {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Not found..");
    }
    return 0;
}