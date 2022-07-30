#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;

    printf("Enter a number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    if (a>b)
    {
        printf("a is greater than b");
    }
    else 
    printf("b is greater than a");

    getch();
    return 0;
}