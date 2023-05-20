#include <stdio.h>
#include <string.h>

int main()
{
    char p[1000001];
    // gets(p);
    scanf("%s", p);
    int sum = 0;
    for (int i = 0; i < strlen(p); i++)
    {
        sum += (p[i] - '0'); // eta bujhay je 0 index er digit/valu. '0' er jaygay 48 o use kora jabe. eta hocche character theke integer ber korar tech.
    }
    printf("%d", sum);
    return 0;
}