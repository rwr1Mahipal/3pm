#include <stdio.h>

void show(){
    printf("\nTNRN Fun.");
}

int show1(){
    show();
    return 10;
}

int show2(int a, int b){
    printf("%d", a + b);
}

int show3(int a, int b){
    return a + b;
}

int fact(int n){
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    // show();
    // int a = show1();
    // printf("\nTNRS Fun. %d", a);

    // show2(10, 20);

    // int b = show3(100, 300);
    // printf("\nTSRS Fun. %d", b);

    int a = fact(5);
    printf("%d", a);
}