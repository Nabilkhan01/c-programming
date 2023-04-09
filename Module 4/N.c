#include <stdio.h>
int main()
{
    char ch;
    int result;
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        result = ch - 32;
        printf("%c", result);
    }
    else
    {
        result = ch + 32;
        printf("%c", result);
    }
    return 0;
}