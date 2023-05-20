#include <stdio.h>
int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    /*1st way*/ printf("0th index er value:%d\n", *ar);
    /*2nd way*/ printf("0th index er value:%d\n", ar[0]);

    //*ar mane ar er 0th index er value.
    printf("1st index er value:%d\n", *(ar + 1));
    // ekhon poroborti index er value paoar jonno syntex holo: *(ar+1).
    return 0;
}
// *(ar+1) -- ar[1]
// *(1+ar) -- ar[1] / 1[ar] --> printf("1st index er value:%d\n", 1 [ar]);