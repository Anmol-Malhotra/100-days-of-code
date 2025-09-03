//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.



# include<stdio.h>
int main(){
    char operator;
    int num1;
    int num2;
    int result;
    printf("Enter an Operator(+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d",num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d",num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d",num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %d / %d = %d",num1, num2, result);
            break;
        default:
            printf("%c in not a valid operator", operator);
    }
    return 0;    
}