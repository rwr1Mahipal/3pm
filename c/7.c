#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        printf("for loop: %d ", i);
    }

    int i = 1;

    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    do
    {
        i++;
        printf("do wile loop: %d ", i);
    } while (i < 1);
}