#include <stdio.h>
int main()
{
    int n;
    printf("how many enteries do you want:");
    scanf("%d",&n);
    getchar();
    char name[n][50];
    int age[n];
    for (int i=0;i<n;i++)
    {
        printf("\n");
        printf("enter your name:");
        fgets(name[i],sizeof(name[i]),stdin);
        printf("enter your age:");
        scanf("%d",&age[i]);
        getchar();
        if (i==n-1)
        {
            printf("\n");
        }

    }
    for (int i=0;i<n;i++)
    {
        printf("name of %d is :%s",i+1,name[i]);
        printf("age: %d\n",age[i]);
        printf("\n");
    }
    return 0;
}