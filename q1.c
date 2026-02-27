// //// a system records numerical consecutive days  each value maybe +ve -ve or +ve value = +ve outcome -ve = -ve outcome wp to idnetify and display all the negitive values from the given record
// //ur program should 1 read an integer representing the number of days 2 read an integer values and store them as array 3 print all the -ve values 4 if there is no -ve value print no -ve value found
// //sample input 1,5 output = noo -ve values
//     scanf("%d",&n);
//     int a[n];
//     int b=0;
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i=0;i<n;i++)
//     {
//         if(a[i]<0)
//         {
//             b=1;
//             printf("%d\t",a[i]);

//         }
        
//     }
//     if(b==0)
//     printf("No negative values found");
//     return 0;
// } // sample input 6,4,-1,7
// #include<stdio.h>
// int main()
// {
//     int n=0;
//

//in a class student marks are stored in 1d array students at even roll number position at index 0,2,4 belong to section a students at Student at odd numbers belong in section B read an enter read an error read in DJ section 1 is equal to calculate the average marks of section 8 section print the average mark bracket integer value. If no student exist the selected section print zero.
//input format integer n (number of Students) ,2.n integers(marks of students),3 integer value for the section Section 1 equals a section two equals B
// 5->no of students marks->10 20 30 40 50 Value = 1

// in class students marks are stored in ine dimension 
// array astu at even roll no index 0 to 4 belongs to section 
// a and students of add roll no 1 3 5 belong to sectuon b read n 
// integer marks into an array marlks read an integer section one equal 
// to cal the avg marks of section a if 2 avg of section b print the avg 
// marks integer value if no student exists in the selected sction print zero 
// intput format 
// int n (no of stu)
// n integers (marks of stu)
// integer val for the sction

#include <stdio.h>

int main() {
    int n, section, sum = 0, count = 0;



    scanf("%d", &n);
        int marks[n]; 


    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }


    scanf("%d", &section);




        if (section == 1 ) {
                for (int i = 0; i < n; i=i+2) {
            sum += marks[i];
            count++;
        } 
    }

        else if (section == 2  )
         {
                for (int i = 1; i < n; i+=2) {
            sum += marks[i];
            count++;
        }
            
    }


    if (count == 0) {
        printf("0\n");
    } else {
        printf("%f\n", (float)sum / count);
    }

    return 0;
}