// // Q1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
// {
// int s ,s2;
// printf("enter base and height of the triangle");
// scanf("%d %d",&s,&s2);
// float a=.5*(s*s2);
// printf("Area of the triangle is :%.2f",a );
// return 0;
// }

// //Q2
// {
//     int a;
//     int b=0;
//     printf("enter a 5 digit no.");
//     scanf("%d",&a);
//     for(int i=0;i<5;i++)
//     {
//         b=(int)b*10+a%10;
//         a=(int)a/10;
//     }
//     printf("the reversed no is: %d",b);
//     return 0;
// }

// //Q3
// {
//     int a;
//     while(1){
//     printf("=======================================\n");
//     printf("   menu program     \n");
//     printf("=======================================\n");
//     printf(" Commands: \n");
//     printf(" 1.factorial\n");
//     printf(" 2. prime no. or not\n");
//     printf(" 3. odd or even\n");
//     printf(" 4. exit\n");
//     printf("---------------------------------------\n");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:
//         printf("enter a no.");
//         int a;
//         int b=1;
//         scanf("%d",&a);
//         if (a==0)
//         printf("the facorial is 1");
//         for(int i=1;i<=a;i++)
//     {
//             b=b*a;
//             a=a-1;
            
//     }
//     printf("the factorial is:%d",b);
//     break;
//         case 2:
//         int n, i, isPrime = 1;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);


//     if (n <= 1) {
//         isPrime = 0;
//     } else {

//         for (i = 2; i <= sqrt(n); i++) {
//             if (n % i == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }

//         if (isPrime)
//         printf("%d is a prime number.\n", n);
//         else
//         printf("%d is not a prime number.\n", n);
//         break;
//         case 3:
//         printf("enter a no.");
//         int f;
//         scanf("%d",&f);
//         if(f%2==0)
//         printf("even no.");
//         else if(f%2==1)
//         printf("odd no");
//         else
//         printf("invalid no.");
//         break;
//         case 4:
//         exit(0);
//         default:
//                 printf("Unknown option.\n");
//                 break;
//     }

// }
// return 0;
// }

// WAP to Find the division obtained by student using logical operator and if ese ladder.
// Get marks of 5 students through keyboard.
// % >=60 FiRST division
// %= 50 & 59 2nd division
// % =40 &49 3rd division
// %less then or equal to 40 fail

// #include <stdio.h>
// int main()
// {
// int percentage,i;
// for(i=1;i<=05;i++){
//     printf("\n %d",i);
//     scanf("%d",&percentage);
//     if (percentage>=60){
//         printf("FIRST division");
//     }
//     else if(50<=percentage<60){
//         printf("SECOND division");
//     }
//     else if(40<=percentage<50){
//         printf("THIRD division");
//     }
//     else{
//         printf("FAIL");
//     }
    
// }
//     return 0;
// }

// WAP to While purchasing certain items, a discount of 10% was offered, If quantity is more then
// 1000.If Quantity and price are offered through keyboard, wap to calculate expense.
// #include <stdio.h>
// int main()
// {
// float expense,res;
// scanf("%f",&expense);
// if(expense>1000){
//   res=expense*0.90 ;
//   printf("final price is:%0.2f",res); 
// }
// else{
//     printf("final price is:%0.2f",expense);
// }
//     return 0;
// }

// WAP to . In a company employee is paid HRA and DA, if his basic salary (BS) is less then Rs
// 1500 then HRA = 10 % of BS and DA = 90% of BS. If employee salary is input through
// keyboard, wap to find grass salary.

// #include <stdio.h>
// int main() {
//     float bs, hra, da, gross;
//     printf("Enter Basic Salary: ");
//     scanf("%f", &bs);
//     if (bs < 1500) {
//         hra = 0.10 * bs;
//         da  = 0.90 * bs;
//     }
//     gross = bs + hra + da;
//     printf("Basic Salary = %.2f\n", bs);
//     printf("HRA = %.2f\n", hra);
//     printf("DA = %.2f\n", da);
//     printf("Gross Salary = %.2f\n", gross);

//     return 0;
// }

// WAP to Consider a currency system in which there are notes of 6 denominations Rs
// 1,2,5,10,50,100. If a sum of Rs N is entere through keyboard. WAP to compute smallest
// no. of notes that will combine to give Rs N. solve

// #include <stdio.h>

// int main() {
//     int n, notes = 0;

//     printf("Enter the amount: ");
//     scanf("%d", &n);

//     notes += n / 100;
//     n = n % 100;

//     notes += n / 50;
//     n = n % 50;

//     notes += n / 10;
//     n = n % 10;

//     notes += n / 5;
//     n = n % 5;

//     notes += n / 2;
//     n = n % 2;

//     notes += n / 1;

//     printf("Smallest number of notes = %d\n", notes);

//     return 0;
// }

