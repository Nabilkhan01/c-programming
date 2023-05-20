#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1]; // insert er khetre array size beshi hbe karon ami new value dhukabo.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int value, pos;
    scanf("%d %d", &value, &pos);
    for (int i = n; i >= pos + 1; i--) // normal reverse e n-1 theke suru kortam kintu ekhon majhe jehtu ekta value insert hbe tai n theke suru hbe jate gap create hoy.
    // pos+1 hoise karon pos holo index er man but amr kaj korte hbe size niye that means pos=1 means size =2,thats why pos+1.
    {
        a[i] = a[i - 1];
    }               // ei for loop diya value replace korsi.
    a[pos] = value; // pos = always index er man.
    for (int i = 0; i <= n /*Or i<n+1*/; i++)
    {
        printf("%d ", a[i]);
    } // ei for loop diya final result print kormu.
    return 0;
}