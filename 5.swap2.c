#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10, b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n", a);
    printf("%d", b);
    getch();
    return 0;
}