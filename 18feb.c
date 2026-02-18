// table
#include<stdio.h>
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][j]=(i+1)*(j+1);
        }
    }
    printf(". |  1. 2. 3. 4. 5.\n ");
    printf("-------------------\n");
    for (int i = 0; i < 5; i++)
     { 
        printf("%d |", (i + 1));
        for (int j = 0; j < 5; j++) 
        { 
   
            printf(" %2d", a[i][j]); 
        }
        printf("\n");
    }
    return 0;
}