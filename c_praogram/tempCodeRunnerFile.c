
// #include <stdio.h>
// int main()

// {
//     int i, j, n = 3;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()

{
    int i, j, n = 4;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}