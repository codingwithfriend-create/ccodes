#include <stdio.h>
#include <math.h>
//optimised by google gemini

int main() {
    double total = 0;
    double last_total = 0;
    double next_num;
    char op;

    printf("=======================================\n");
    printf("   ADVANCED SEQUENTIAL CALCULATOR      \n");
    printf("=======================================\n");
    printf(" Commands: \n");
    printf(" [+][-][*][/] | [p] Power | [s] Sq Root\n");
    printf(" [u] Undo     | [c] Clear | [=] Exit\n");
    printf("---------------------------------------\n");

    printf("Enter starting number: ");
    while (scanf("%lf", &total) != 1) {
        printf("Invalid input. Enter a number: ");
        while(getchar() != '\n');
    }

    last_total = total;

    while (1) {
        printf("\n>>> Current Total: %.4f\n", total);
        printf("Operation: ");
        scanf(" %c", &op);

        if (op == '=') break;

        if (op == 'c' || op == 'C') {
            printf("Cleared. Enter starting number: ");
            while (scanf("%lf", &total) != 1) {
                printf("Invalid. Enter a number: ");
                while(getchar() != '\n');
            }
            last_total = total;
            continue;
        }

        if (op == 'u' || op == 'U') {
            total = last_total;
            printf("Undone.\n");
            continue;
        }

        if (op == 's' || op == 'S') {
            last_total = total;
            if (total >= 0) {
                total = sqrt(total);
            } else {
                printf("Error: Negative square root!\n");
            }
            continue;
        }

        printf("Enter number: ");
        if (scanf("%lf", &next_num) != 1) {
            printf("Invalid number.\n");
            while(getchar() != '\n');
            continue;
        }

        last_total = total;

        switch (op) {
            case '+': total += next_num; break;
            case '-': total -= next_num; break;
            case '*': total *= next_num; break;
            case '/':
                if (next_num != 0) total /= next_num;
                else printf("Error: Division by zero!\n");
                break;
            case 'P':
            case 'p':
                total = pow(total, next_num);
                break;
            default:
                printf("Unknown operator.\n");
                break;
        }
    }

    printf("\n---------------------------------------\n");
    printf("FINAL RESULT: %.4f\n", total);
    printf("---------------------------------------\n");

    return 0;
}