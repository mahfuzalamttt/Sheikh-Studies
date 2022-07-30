#include<stdio.h>
#include<conio.h>
int main()

{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    a%2==0 ? printf("This is a Even number.") : printf("This is odd number.");

    getch();
    return 0;
}