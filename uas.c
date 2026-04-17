#include <stdio.h>
#include <string.h>


union MarkOrGrade {
    float marks;
    char grade;
};

struct Student {
    char name[50];
    int roll_number;
    int result_type; 
    union MarkOrGrade result;
};

int main() {
    int num_students;

    printf("Enter the number of students (must be more than 2): ");
    scanf("%d", &num_students);

    if (num_students <= 2) {
        printf("You must enter a number greater than 2 to proceed!\n");
        return 1;
    }

    struct Student students[num_students];


    for (int i = 0; i < num_students; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Evaluate using (0 for Marks, 1 for Grade): ");
        scanf("%d", &students[i].result_type);

        if (students[i].result_type == 0) {
            printf("Enter Marks: ");
            scanf("%f", &students[i].result.marks);
        } else {
            printf("Enter Grade: ");

            scanf(" %c", &students[i].result.grade);
        }
    }


    printf("\n========== Student Records ==========\n\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student Name: %s\n", students[i].name);
        printf("Roll Number : %d\n", students[i].roll_number);
        
        if (students[i].result_type == 0) {
            printf("Performance : %.2f Marks\n", students[i].result.marks);
        } else {
            printf("Performance : Grade %c\n", students[i].result.grade);
        }
        
        printf("-------------------------------------\n");
    }

    return 0;
}
