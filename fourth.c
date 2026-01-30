#include<stdio.h>

int main()
{
    int n, b, d, choice;
    char w = ' ';
    char sub_choice;
    
    printf("how many enteries do you want:");
    scanf("%d", &n);
    
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("enter no. for position %d:", i + 1);
        scanf("%d", &a[i]);
    }

    while (1)
    {
        printf("\n\n--- MAIN MENU ---\n");
        printf("1. Perform Calculations\n");
        printf("2. Change All Entries\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 3)
        {
            break;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < n; i++)
            {
                printf("enter new no. for position %d:", i + 1);
                scanf("%d", &a[i]);
            }
        }
        else if (choice == 1)
        {
            // Inner loop for repeating calculations on existing values
            while (1)
            {
                printf("\n--- Calculation Mode ---\n");
                printf("what do you want to do (+, -, *, /): ");
                scanf(" %c", &w);
                
                printf("enter their positions (e.g. 1 2): ");
                scanf("%d %d", &b, &d);

                if (b < 1 || b > n || d < 1 || d > n)
                {
                    printf("invalid position\n");
                }
                else if (w == '+')
                {
                    printf("the sum of %d and %d is: %d\n", b, d, a[b - 1] + a[d - 1]);
                }
                else if (w == '-')
                {
                    printf("the diff of %d and %d is: %d\n", b, d, a[b - 1] - a[d - 1]);
                }
                else if (w == '*')
                {
                    printf("the mul of %d and %d is: %d\n", b, d, a[b - 1] * a[d - 1]);
                }
                else if (w == '/')
                {
                    if (a[d - 1] == 0)
                        printf("division by zero is not possible\n");
                    else
                        printf("the ans of %d and %d is: %.2f\n", b, d, (float)a[b - 1] / a[d - 1]);
                }
                else
                {
                    printf("invalid operator\n");
                }

                printf("\nPerform another calculation on existing values? (y/n): ");
                scanf(" %c", &sub_choice);
                if (sub_choice == 'n' || sub_choice == 'N')
                {
                    break; // Exits the calculation loop, goes back to Main Menu
                }
            }
        }
        else
        {
            printf("invalid choice\n");
        }
    }

    return 0;
}