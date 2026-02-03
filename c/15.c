#include <stdio.h>

int main()
{
    // char a = 'a';
    // char b[] = {'a', 'b', 'c','\0'};
    // char c[] = "JavaScript";

    // printf("%c", a);
    // printf("\n%s", b);
    // printf("\n%s", c);


    char str[100];

    printf("Enter name: ");
    // scanf("%s", &str);
    fgets(str, 100, stdin);
    // printf("\n%s", str);
    puts(str);
}