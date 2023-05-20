#include <stdio.h> //Prblm not solved:Test case 1 error.

int main()
{
    int n;
    scanf("%d", &n);
    int count_x1 = 0, count_x2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2)
        {
            count_x1++;
        }
        if (x1 < x2)
        {
            count_x2++;
        }
        // if (x1 == x2)
        // {
        //     count_x1 - 1;
        //     count_x2 - 1;
        // }
    }
    if (count_x1 > count_x2)
    {
        printf("Tiger\n");
    }
    else if ("count_x1<count_x2")
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}