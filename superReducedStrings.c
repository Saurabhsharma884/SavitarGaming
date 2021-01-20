#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, n, j;
    scanf("%s", str);
    n = strlen(str);

    while (i < n)
    {
        if (str[i] == str[i + 1])
        {
            for (j = i; j < n; j++)
            {
                str[j] = str[j + 2];
                str[j + 1] = str[j + 3];
            }
            n = n - 2;
            i = 0;
        }
        else
            i = i + 1;
    }
    if (n != 0)
        printf("%s", str);
    else
        printf("Empty String");
    return 0;
}