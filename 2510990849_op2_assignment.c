#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    
    printf("The largest number is %d\n", max);
    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) printf("Positive\n");
    else if (n < 0) printf("Negative\n");
    else printf("Zero\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("AND: %d\nOR: %d\nXOR: %d\n", a & b, a | b, a ^ b);
    return 0;
}

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is not a Leap Year.\n", year);

    return 0;
}

#include <stdio.h>

int main() {
    float p, r, t;
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f\n", (p * r * t) / 100);
    return 0;
}

#include <stdio.h>

int main() {
    int num, pos;
    printf("Enter number and bit position: ");
    scanf("%d %d", &num, &pos);

    int result = num ^ (1 << pos);

    printf("Result: %d\n", result);
    return 0;
}

#include <stdio.h>

int main() {
    int base, exp, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for (int i = 0; i < exp; i++) result *= base;

    printf("Result: %d\n", result);
    return 0;
}

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}