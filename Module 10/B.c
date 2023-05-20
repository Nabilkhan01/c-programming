#include <stdio.h>

int main()
{
    char s[1000001]; // boila dise s<=1000000.
    gets(s);
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]); // ekhane %c er jaygay %s dite parbo nh karon ekhane loop er maddhome single character print hoitase.
    }

    return 0;
}