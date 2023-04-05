#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Go to coxs bazar\n");
        if (tk >= 10000)
        {
            printf("Go to saint martin\n");
        }
        else
        {
            printf("Back\n");
        }
    }
    else
    {
        printf("Nothing to do\n");
    }
    return 0;
}