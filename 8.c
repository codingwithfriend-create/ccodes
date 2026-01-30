// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     if(!printf(""))
//     {
//         printf("f");
//     }
//     else
//     {
//     printf("g");
//     printf("h");
// }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int marks;

//     printf("Enter your marks: ");
//     scanf("%d", &marks);


//     if (marks > 100 || marks < 0) {
//         printf("Invalid input! Please enter marks between 0 and 100.\n");
//     } 
//     else if (marks >= 75) {
//         printf("Grade: A\n");
//     } 
//     else if (marks >= 50) {
//         printf("Grade: B\n");
//     } 
//     else if (marks >= 35) {
//         printf("Grade: C\n");
//     } 
//     else {
        
//         printf("Grade: D\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() 
{
    char c;

    printf("Enter your character: ");
    scanf("%c", &c);


    if (c>='A' && c<='Z') {
        printf("UPPER CHAR\n");
    } 
    else if (c>='a' && c<='z') {
        printf("LOWER CHAR\n");
    } 
    else if (c>='0' && c<='9') {
        printf("NUM\n");
    } 
    else {
        
        printf("SPECIAL CHAR\n");
    }

    return 0;
}