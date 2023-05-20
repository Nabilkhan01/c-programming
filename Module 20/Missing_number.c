#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        long long int S, A, B, C;
        scanf("%lld %lld %lld %lld", &S, &A, &B, &C);
        long long int D;
        D = S - (A + B + C);
        printf("%lld\n", D);
    }

    return 0;
}
