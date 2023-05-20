#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    gets(s);
    int len = strlen(s);
    int cap = 0, sma = 0, spa = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cap++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            sma++;
        }
        else if (s[i] == ' ')
        {
            spa++;
        }
    }
    printf("Capital - %d\n", cap);
    printf("Small - %d\n", sma);
    printf("Spaces - %d\n", spa);

    return 0;
}