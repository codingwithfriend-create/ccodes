#include<stdlib.h>
#include<stdio.h>
// int main()
// {
//     int i,n;
//     int *p;
//     printf("enter a value:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         p=(int*)malloc(sizeof(int));
//         printf("the allocated address %p\n:",(void*)p);
//     }
//     return 0;
// }
// {
//     auto int j=1;
//     {
//         auto int j=2;
//         {
//             auto int j=3;
//             printf("%d\n",j);
//         }
//            printf("%d\n",j);
//     }
//        printf("%d\n",j);
//        return 0;
// }
// {
//     int i;
//     auto char c;
//     float f;
//     printf("%d %c %f",i,c,f);

// }
// {
//     int a =0;
//     {
//         int a=10;
//         printf("%d\n",a);
//         a++;
//         {
//             a=20;
//         }
//         {
//             printf("%d\n",a);
//             int a=30;
//             a++;
//             printf("%d\n",a);
//         }
//         printf("%d\n",a);
//     }
//     printf("%d\n",a);
//     return 0;
// }
// extern int var;
// int main(void)
// {
//     var =10;
//     return 0;
// } 