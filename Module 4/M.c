#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= 'a' && n <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if (n >= 'A' && n <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (n >= '0' && n <= '9')
    {
        printf("IS DIGIT\n");
    }

    return 0;
}