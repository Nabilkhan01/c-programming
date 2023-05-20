#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    int alp[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int val = s[i] - 'a';
        alp[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c-%d\n", 'a' + i, alp[i]);
    }
    return 0;
}