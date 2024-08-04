#include <stdio.h>

void addition(float a, float b) {
    printf("Result: %.2f\n", a + b);
}

void subtraction(float a, float b) {
    printf("Result: %.2f\n", a - b);
}

void multiplication(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void division(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    float num1, num2;
    char operator;

    printf("Enter first number:\n");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /):\n");
    scanf(" %c", &operator);
    
    printf("Enter second number:\n");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            addition(num1, num2);
            break;
        case '-':
            subtraction(num1, num2);
            break;
        case '*':
            multiplication(num1, num2);
            break;
        case '/':
            division(num1, num2);
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}