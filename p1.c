#include <stdio.h>

int main() {
    int my_number = 10;
    printf("The adress of my_number is: %p\n", &my_number);
    int *my_pointer = &my_number;
    scanf("%d",&(*my_pointer));
    printf("The address of my_number is: %p\n",&my_number);
    printf("The value of my_number is: %d\n", my_number);
    my_number+=1;
    printf("The address of my_number is: %d\n",&my_number);
    
    return 0;
}