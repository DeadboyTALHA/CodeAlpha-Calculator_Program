#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;
    
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed!\n");
            }
            break;
            
        default:
            printf("\nError: Invalid operation!\n");
            printf("Please use only +, -, *, /\n");
    }
    
    return 0;
}