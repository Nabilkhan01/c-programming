// 1. Has Return + has Parameter
#include <stdio.h>
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int val = sum(a, b);
    printf("%d\n", val);
    return 0;
}

// 2. Has return + No parameter
#include <stdio.h>

int mul(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int mul = a * b;
    return mul;
}
int main()
{
    int s = mul();
    printf("%d", s);
    return 0;
}

// 3. No Return + Parameter
#include <stdio.h>
void reverseIt(int a)
{
    int reverse = 0, remainder = 0;
    while (a != 0)
    {
        remainder = a % 10;
        reverse = reverse * 10 + remainder;
        a = a / 10;
    }

    printf("%d\n", reverse);
}

int main()
{
    int n;
    scanf("%d", &n);

    reverseIt(n);
    return 0;
}

// 4. No Return + No Parameter
#include <stdio.h>

void YourName()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("%s\n", name);
}

int main()
{
    YourName();
    return 0;
}