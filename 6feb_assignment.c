#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
        ? printf("%d is a Leap Year.\n", year) 
        : printf("%d is not a Leap Year.\n", year);

    return 0;
}
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is Even.\n", num) : printf("%d is Odd.\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18) 
        ? printf("You are eligible to vote.\n") 
        : printf("You are not eligible to vote. Wait %d more year(s).\n", 18 - age);

    return 0;
}
#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1:  
        case 3:
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            printf("31 Days\n");
            break;
        case 4: 
        case 6: 
        case 9:  
        case 11: 
            printf("30 Days\n");
            break;
        case 2:
            printf("28 or 29 Days (depending on Leap Year)\n");
            break;

        default:
            printf("Invalid input! Please enter a month between 1 and 12.\n");
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch, lowerCh;

    printf("Enter any alphabet: ");
    scanf(" %c", &ch);
    lowerCh = tolower(ch);

    switch(lowerCh) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
            printf("'%c' is a Vowel.\n", ch);
            break;
            
        default: 
            if(lowerCh >= 'a' && lowerCh <= 'z')
                printf("'%c' is a Consonant.\n", ch);
            else
                printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("%d is Even.\n", num);
            break;
        case 1:
        case -1:
            printf("%d is Odd.\n", num);
            break;
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    switch (d > 0) {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Two distinct real roots: %.2f and %.2f\n", r1, r2);
            break;

        case 0:
            switch (d < 0) {
                case 1:
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-d) / (2 * a);
                    printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", 
                            realPart, imagPart, realPart, imagPart);
                    break;

                case 0:
                    r1 = r2 = -b / (2 * a);
                    printf("Two equal real roots: %.2f\n", r1);
                    break;
            }
            break;
    }

    return 0;
}
#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Division by zero check
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}