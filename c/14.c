#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a=%d b=%d", *a, *b);
}

int main()
{
    // int a = 10;
    // int *p = &a;
    // printf("%d %p %d", *p, p, p);

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    // printf("%d %p", *(p+1), (p+1));
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d", *(p + i), (p + i));
        printf("\n");
    }

    // char ch[] = "Hello\0";
    // char *p = ch;
    // // printf("%s", *p);
    // while (*p != 0)
    // {
    //     printf("%c %d", *p, p);
    //     p++;
    //     printf("\n");
    // }

    // int a = 10, b = 20;
    // swap(&a, &b);
}