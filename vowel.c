//Write a program to input a character and check whether it is a vowel or consonant using if–else.


#include <stdio.h>
int main()
{
    char v;
    printf("Enter a variable: ");
    scanf("%c", &v);
    if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || 
        v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U')
    {
        printf("%c is a vowel\n", v);
    }
    else
    {
        printf("%c is not a vowel\n", v);
    }
    return 0;
}