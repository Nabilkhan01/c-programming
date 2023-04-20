#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);
    // a+b
    int clen = alen + blen;
    char c[clen];
    for (int i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    int i = alen;
    for (int j = 0; b[j] != '\0'; j++)
    {
        c[i] = b[j];
        i++;
    }
    c[i] = '\0';
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;

    printf("%d %d\n", alen, blen);
    printf("%s\n", c);
    printf("%s %s\n", a, b);
    return 0;
}