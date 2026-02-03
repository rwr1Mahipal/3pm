#include <stdio.h>

int main()
{
    int a = 30, b = 20, c = 10;

    if (a > b)
    {
        if (b > c){
            printf("A is biggest");
        }else{
            printf("C is biggest first");
        }
    }
    else
    {
        if (b > c){
            printf("B is biggest");
        }else{
            printf("C is Biggest second");
        }
    }
}