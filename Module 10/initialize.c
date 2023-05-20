#include <stdio.h>

int main()
{
    // char a[5] = {'N', 'A', 'B', 'I', 'L'}; eta hocche array er niyom e input neya.
    char a[5] = "NABIL"; // This is the use of super power of string.
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}