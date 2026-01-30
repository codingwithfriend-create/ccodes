#include <stdio.h>

int main() {
    int age;

    // Prompt the user for input
    printf("Enter your age: ");

    // Read the integer input from the user
    // The & symbol is the "address-of" operator
    scanf("%d", &age);

    // Display the output
    printf("You are %d years old.\n", age);

    return 0;
}