// // Q1
#include<stdio.h>
int main()
// {
// int s ,s2;
// printf("enter base and height of the triangle");
// scanf("%d %d",&s,&s2);
// float a=.5*(s*s2);
// printf("Area of the triangle is :%.2f",a );
// return 0;
// }

//Q2
{
    int a;
    int b;
    printf("enter a 5 digit no.");
    scanf("%d",&a);
    for(int i=0;i<5;i++)
    {
        b=(int)b*10+a%10;
        a=(int)a/10;
    }
    printf("the reversed no is: %d",b);
    return 0;
}
