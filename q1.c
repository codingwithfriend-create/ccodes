//// a system records numerical consecutive days  each value maybe +ve -ve or +ve value = +ve outcome -ve = -ve outcome wp to idnetify and display all the negitive values from the given record
//ur program should 1 read an integer representing the number of days 2 read an integer values and store them as array 3 print all the -ve values 4 if there is no -ve value print no -ve value found
//sample input 1,5 output = noo -ve values
// sample input 6,4,-1,7
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    int b=0;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b=1;
            printf("%d\t",a[i]);

        }
        
    }
    if(b==0)
    printf("No negative values found");
    return 0;
}