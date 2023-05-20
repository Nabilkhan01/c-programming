#include <stdio.h>
#include <string.h>

int is_palindrome(char *w, int s)
{
    // coping string to a new array
    char rerverseWord[s];
    for (int k = 0; k < s; k++)
    {
        rerverseWord[k] = w[k];
    }

    // reversing main array
    int i = 0, j = s - 1;
    while (i < j)
    {
        char temp = w[i];
        w[i] = w[j];
        w[j] = temp;
        i++;
        j--;
    }

    // checking whether palindrome
    int flag = 1;
    for (int m = 0; m < s; m++)
    {
        if (w[m] != rerverseWord[m])
        {
            flag = 0;
        }
    }

    return flag;
}

int main()
{

    char word[10];
    scanf("%s", word);
    int len = strlen(word);

    int val = is_palindrome(word, len);
    if (val == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}