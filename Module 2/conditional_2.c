#include <stdio.h>

int main()
{
    int Tk;
    scanf("%d", &Tk);
    if (Tk >= 100)
    {
        printf("Eat burger\n");
    }
    else if (Tk >= 50)
    {
        printf("Eat chips\n");
    }
    else
    {
        printf("Nothing to do\n");
    }
    return 0;
}