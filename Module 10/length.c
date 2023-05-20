#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // fgets(a, 100, stdin);
    scanf("%s", a);
    //  int count = 0;
    //   for (int i = 0; a[i] != '\0'; i++)
    //   {
    //       count += 1;
    //   }
    //   int i = 0;
    //   while (a[i] != '\0')
    //   {
    //       count++;
    //       i++;
    //   }
    int st = strlen(a); // string er length ber korar built in function.
    printf("%d", st);
    return 0;
}