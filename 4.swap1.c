#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1, b=2, c;
    c=a;
    a=b;
    b=c;
    printf("The value of b=%d\n", b);
    printf("The value of a=%d\n",a);
    getch();
    return 0;
}