#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // int i=1;
    // while(i<=5){
    //     int j=1;
    //     while(j<=5){
    //         printf("%d ",j);
    //         j++;
    //     }
    //     i++;
    //     printf("\n");
    // }
}