#include <stdio.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
}

int main() {
    double num1, num2;
    char operator;

    // Get user input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume the newline character

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2lf\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2lf\n", divide(num1, num2));
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
