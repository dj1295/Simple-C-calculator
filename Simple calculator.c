//RA2211003011595 Assignment 1 Q5

#include <stdio.h>

int add_11595(int a_11595, int b_11595) {
    return a_11595 + b_11595;
}

int subtract_11595(int a_11595, int b_11595) {
    return a_11595 - b_11595;
}

int multiply_11595(int a_11595, int b_11595) {
    return a_11595 * b_11595;
}

int divide_11595(int a_11595, int b_11595) {
    if (b_11595 == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a_11595 / b_11595;
}

int main() {
    int a_11595, b_11595;
    char operator_11595;
    int (*operations[4])(int, int) = {add_11595, subtract_11595, multiply_11595, divide_11595};

    printf("Enter two numbers (a_11595 and b_11595): ");
    scanf("%d %d", &a_11595, &b_11595);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator_11595);

    int operation_index = -1;

    // Find the index of the selected operation
    if (operator_11595 == '+') {
        operation_index = 0;
    } else if (operator_11595 == '-') {
        operation_index = 1;
    } else if (operator_11595 == '*') {
        operation_index = 2;
    } else if (operator_11595 == '/') {
        operation_index = 3;
    } else {
        printf("Invalid operator!\n");
        return 1;
    }

    int result = operations[operation_index](a_11595, b_11595);
    printf("Result: %d\n", result);

    return 0;
}

