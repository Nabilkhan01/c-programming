#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 97 && ch < 122)
    {
        ch += 1;
        printf("%c", ch);
    }
    else if (ch == 122)
    {
        printf("a\n");
    }

    return 0;
}