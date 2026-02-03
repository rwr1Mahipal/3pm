#include <stdio.h>

int main()
{
    // int a = 10;
    // (a % 2 == 0) ? printf("Even Num") : printf("Odd Num");

    // int a = 10, b = 40, c = 30;
    // int d = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    // printf("%d", d);

    int a, b;
    char op;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Enter operator +,-,*,/: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Sum of a + b = %d", a + b);
        break;
    case '-':
        printf("Sub. of a - b = %d", a - b);
        break;
    case '*':
        printf("Multi. of a * b = %d", a * b);
        break;
    case '/':
        printf("Div. of a / b = %d", a / b);
        break;

    default:
        printf("Invalid Op.");
        break;
    }
}