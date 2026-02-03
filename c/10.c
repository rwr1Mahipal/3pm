#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    arr[4]=500;
    arr[5]=5000;

    int length = sizeof(arr) / sizeof(arr[1]);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n%d", length);
}