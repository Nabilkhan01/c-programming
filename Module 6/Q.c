// #include <stdio.h>

// int main()
// {
//     int test;
//     scanf("%d", &test);
//     for (int t = 1; t <= test; t++)
//     {
//         int n;
//         scanf("%d",&n);
//         do
//         {
//             printf("%d ",n%10);
//             n = n/10;
//         } while (n != 0);
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int i = 10;
    while (i >= 0)
    {
        printf("%d ", i);
        i -= 2;
    }
}
