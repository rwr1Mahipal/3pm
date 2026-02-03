#include <stdio.h>
#include <string.h>

int main()
{
    // char ch = 'A';
    // char str[] = "Mern Developer";
    // char name[100] = {"JavaScript Developer"};

    // printf("%c", ch);
    // printf("\n%s", str);
    // printf("\n%s", name);

    // for (char ch = 'A'; ch <= 'z'; ch++)
    // {
    //     printf("%c => ", ch);
    //     printf("%d ", ch);
    // }

    char str[] = "Mern Developer\0";
    char str1[] = "Java";
    // printf("%d", strlen(str));
    // printf("%s", strupr(str));
    // printf("%s", strlwr(str));
    // printf("%s", strcpy(str, "Java"));
    printf("%s", strcat(str, str1));
}