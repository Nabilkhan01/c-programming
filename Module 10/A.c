#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001]; // 1001 nisi karon ora bole dise highest 1000 porjonto input nite pare tai ami 1000 er sathe 1ta extra null nissi.
    char b[1001];
    scanf("%s", &a); // scanf nisi karon input sample e just character er length chaise.. fgets() nile null soho length print hoito.
    scanf("%s", &b);
    int st = strlen(a);
    int sT = strlen(b);
    printf("%d %d\n", st, sT);
    printf("%s %s", a, b);
    return 0;
}
/*.........Manual version..........*/
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     char a[1001], b[1001];
//     scanf("%s %s", a, b);
//     int len_a = 0;
//     int len_b = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         len_a++;
//     }
//     for (int i = 0; b[i] != '\0'; i++)
//     {
//         len_b++;
//     }
//     printf("%d %d\n", len_a, len_b);
//     int n = len_a;
//     int m = len_b;
//     a[n] = ' ';
//     for (int i = 0; i < m; i++)
//     {
//         a[n + 1] = b[i];
//         n++;
//     }
//     printf("%s", a);
//     return 0;
// }
