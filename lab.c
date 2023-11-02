#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input the operator and operands
    printf("Enter operator (+, -, *, /, ^, h): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check if the denominator is not zero
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit with an error code
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 'h':
        { 
              int decimalNumber;
            // Input the decimal number
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNumber);
            // Convert decimal to hexadecimal
            printf("Hexadecimal equivalent: %X\n", decimalNumber);
            break;
        }
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with an error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit successfully
}
