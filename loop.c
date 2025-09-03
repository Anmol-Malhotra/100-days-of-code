//Write a program to print numbers from 1 to n.



#include <stdio.h>
int main()
{
    int a;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    printf("Numbers from 1 to %d:\n", a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}