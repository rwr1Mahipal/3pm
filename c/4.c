#include <stdio.h>

int main()
{
    int marks;
    printf("Enter a marks: ");
    scanf("%d", &marks);

    if (marks < 35)
    {
        printf("Your fail");
    }
    else if (marks < 50)
    {
        printf("Grade C");
    }
    else if (marks < 60)
    {
        printf("Grade B");
    }
    else
    {
        printf("Grade A");
    }
}