#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1) // this is called infinity loop. eta use korsi karon loop er limit ami jni nh tai ei loop use kore somoy moto break kore disi.
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a small\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b small\n");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("a choto\n"); // A smallest & Z greatest(according to ASCII value)
            break;
        }
        else
        {
            printf("b choto\n");
            break;
        }
    }
    return 0;
}