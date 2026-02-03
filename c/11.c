#include <stdio.h>

int main()
{
    int arr[5][7] = {
        {10, 20, 30, 40, 50, 60, 70},
        {100, 200, 300, 400, 500, 600, 700}};

        int row = sizeof(arr) / sizeof(arr[0]);
        int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    arr[3][1] = 500;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // printf("%d ", arr[i][j]);
            // printf("Enter value: ");
            // scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }
}