#include <stdio.h> // Include standard input-output library

int main() {
    char op;             // operator (+, -, *, /)
    double num1, num2;   // Variables numbers
    double result;       // final result

    // enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);    //  the operato user

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // Read two double-precision numbers

    // Switch case to perform calculation based on the operator
    switch (op) {
        case '+': // If operator is '+'
            result = num1 + num2; // Perform addition
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result); // Print result
            break; // Exit switch

        case '-': // If operator is '-'
            result = num1 - num2; // Perform subtraction
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result); // Print result
            break; // Exit switch

        case '*': // If operator is '*'
            result = num1 * num2; // Perform multiplication
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result); // Print result
            break; // Exit switch

        case '/': // If operator is '/'
            if (num2 != 0) { // Check if the second number is not zero
                result = num1 / num2; // Perform division
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result); // Print result
            } else {
                printf("Error! Division by zero is not allowed.\n"); // Error message
            }
            break; // Exit switch

        default: // If the operator does not match any case
            printf("Error! Operator is not correct.\n"); // Error message
    }

    return 0; // Indicate that the program finished successfully
}
