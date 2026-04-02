#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,n;
    int *p;
    printf("enter a value:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=(int*)malloc(sizeof(int));
        printf("the allocated address %p\n:",(void*)p);
    }
    return 0;
}