#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i); // continue er pore printf disi tai 5  print nh kore skip korse.
    }
    return 0;
}