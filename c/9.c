#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {

        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3 || i == 5)
        {
            printf("%d %d %d %d %d", i, i, i, i, i);
        }
        else
        {
            printf("%d       %d", i, i);
        }
        printf("\n");
    }

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        ;
        printf("%d ", i);
    }
}