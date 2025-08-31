//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        printf("%c is an uppercase alphabet", a);
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("%c is a lowercase alphabet", a);
    }
    else if (a >= '0' && a <= '9')
    {
        printf("%c is a digit", a);
    }
    else
    {
        printf("%c is a special character", a);
    }
    return 0;
}