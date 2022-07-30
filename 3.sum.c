#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;

    printf("Enter a Number:");
    scanf("%d",&a);
    
    printf("Enter second Number:");
    scanf("%d",&b);

    c = a+b;

    printf("The Sum of two Numbers Are: %d",c);
    getch();
    return 0;
}