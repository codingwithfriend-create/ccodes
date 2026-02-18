// // table
// #include<stdio.h>
// int main()
// {
//     int a[5][5];
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             a[i][j]=(i+1)*(j+1);
//         }
//     }
//     printf(". |  1. 2. 3. 4. 5.\n ");
//     printf("-------------------\n");
//     for (int i = 0; i < 5; i++)
//      { 
//         printf("%d |", (i + 1));
//         for (int j = 0; j < 5; j++) 
//         { 
   
//             printf(" %2d", a[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
// add
// #include<stdio.h>
// int main()
// {
//     int a[5][5];
//     int b[5][5];
//     int c[5][5];
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             scanf("%d",&a[i][j]);
//             scanf("%d",&b[i][j]);
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("c matrix after addition of a and b is\n ");
//     printf("-------------------\n");
//     for (int i = 0; i < 5; i++)
//      { 
//         for (int j = 0; j < 5; j++) 
//         { 
   
//             printf(" %5d", c[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
// // substract
// #include<stdio.h>
// int main()
// {
//     int a[5][5];
//     int b[5][5];
//     int c[5][5];
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             scanf("%d",&a[i][j]);
//             scanf("%d",&b[i][j]);
//             c[i][j]=a[i][j]-b[i][j];
//         }
//     }
//     printf("c matrix after substraction of a and b is\n ");
//     printf("-------------------\n");
//     for (int i = 0; i < 5; i++)
//      { 
//         for (int j = 0; j < 5; j++) 
//         { 
   
//             printf(" %5d", c[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
// scaler multiplication
#include<stdio.h>
int main()
{
    int a[5][5];
    int b[5][5];
    int n;
    printf("the value to multiply with: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j]*n;
        }
    }
    printf(" matrix after multiplication a and %d is\n ",n);
    printf("-------------------\n");
    for (int i = 0; i < 5; i++)
     { 
        for (int j = 0; j < 5; j++) 
        { 
   
            printf(" %5d", b[i][j]); 
        }
        printf("\n");
    }
    return 0;
}