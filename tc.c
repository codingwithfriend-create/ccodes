#include<stdio.h>
int main()
// {
//     double x=1.2;
//     int sum=(int)x+1;
//     printf("sum=%d",sum);
//     return 0;
// }
{
    int a=0;
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("monday\n");break;
        case 2:printf("tuesday\n");break;
        case 3:printf("wednesday\n");break;
        case 4:printf("thursday\n");break;
        case 5:printf("friday\n");break;
        case 6:printf("saturdau\n");break;
        case 7:printf("sunday\n");break;
        default:printf("invalid");
    }
    return 0;
}