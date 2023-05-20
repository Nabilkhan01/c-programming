#include <stdio.h>

int main()
{

    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("A[%d]=%d\n", i, ar[i]);
    }
    return 0;
}