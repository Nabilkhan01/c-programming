#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("Hello\n"); // printf er pore diile age 5 bar print hbe pore theme jabe. r age dile sudu 4 bar print korbe.
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}