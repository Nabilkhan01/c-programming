#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        char s[101];
        scanf("%s", s);
        int st = strlen(s);
        if (st > 10)
        {
            int sT;
            sT = st - 2;                           // karon total leength theke 1st & last er ta bad jabe.
            printf("%c%d%c", s[0], sT, s[st - 1]); // st-1 hoise karon length suru hoy 1 theke r index suru hoy 0 theke. r amr  lagbo index tai 1 minus koira loisi.
        }
        else
        {
            printf("%s", s);
        }
    }
    return 0;
}