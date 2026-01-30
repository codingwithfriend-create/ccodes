// 1.Print the Sizes of Different Data Types
#include<stdio.h>
int main()
{
    printf("%d",sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of char: %d byte\n", sizeof(char));
return 0;
}
// 2. Input and Display an Integer, Float, and Character
#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    scanf("%d %f %c", &a, &b, &c);
    printf("Integer = %d\n", a);
    printf("Float = %.2f\n", b);
    printf("Character = %c\n", c);
    return 0;
}

// 3. Add Two Numbers Using Different Data Types
#include <stdio.h>
int main() {
    int a;
    float b;
    scanf("%d %f", &a, &b);
    float sum = a + b;
    printf("Sum = %.2f", sum);
    return 0;
}

// 4. Calculate the Area of a Circle (Using float and double)
#include<stdio.h>
int main()
{
    float r;
    scanf("%f", &r);

    float area_f = 3.14f * r * r;
    double area_d = 3.14 * r * r;

    printf("Area using float = %.2f\n", area_f);
    printf("Area using double = %.2lf", area_d);
return 0;
}
// 5. Display ASCII Value of a Character
#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);

    printf("ASCII value of %c = %d", ch, ch);
    return 0;
}

// 6. Calculate the Average of Three Numbers (Using float for Precision)
#include<stdio.h>
int main()
{
float a , b ,c;
scanf("%f %f %f",&a,&b,&c);
float avg = a+b+c/3;
printf("%.2f",avg);
return 0;
}
// 7. Store and Display Student Details (Using String and Integer)
#include<stdio.h>
int main()
{
char name[20];
int age , roll ;
scanf("%s %d %d",name , &age , &roll);
printf("my name is %s and roll no is %d ,my age is %d",name,roll ,age);
return 0;
}
// 8. Type Casting: Convert Float to Integer
#include<stdio.h>
int main()
{
float a = 4.0;
int b = (int)a;
printf("%d",b);
return 0;
}