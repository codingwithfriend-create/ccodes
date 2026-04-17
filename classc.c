#include <stdio.h>


float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { 
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b; 
}
int main() {

    float (*operations[])(float, float) = {add, subtract, multiply, divide};

    int choice;
    float num1, num2;

    printf("--- Function Pointer Calculator ---\n");
    printf("0: Add | 1: Subtract | 2: Multiply | 3: Divide\n");
    printf("Enter choice and two numbers: ");
    
    if (scanf("%d %f %f", &choice, &num1, &num2) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice >= 0 && choice < 4) {
        // Calling the function through the pointer array
        float result = operations[choice](num1, num2);
        printf("Result: %.2f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}