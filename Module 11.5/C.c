#include <stdio.h>
#include <string.h>

int main()
{
    char X[21], Y[21];
    scanf("%s %s", X, Y);
    int lenX, lenY;
    lenX = strlen(X);
    lenY = strlen(Y);

    int i = 0, j = 0;

    while (i < lenX && j < lenY)
    {
        if (X[i] < Y[j])
        {
        }
        else if (X[i] > Y[j])
        {
        }
        else
        {
            // if the first characters are equal, compare the next ones
            int m = i, n = j;
            while (m < lenX && n < lenY && X[m] == Y[n])
            {
                m++;
                n++;
            }

            if (m == lenX || (n < lenY && X[m] > Y[n]))
            {
                C[k++] = Y[j++];
            }
            else
            {
                C[k++] = X[i++];
            }
        }
    }

    // append the remaining characters of X or Y to C
    while (i < lenX)
    {
        C[k++] = X[i++];
    }
    while (j < lenY)
    {
        C[k++] = Y[j++];
    }

    // null terminate the result string C
    C[k] = '\0';

    printf("The smallest lexicographical string is: %s", C);

    return 0;
}
