#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,d,i,j;
    printf("Enter a number:");
    scanf("%d", &a);
    
    for (;a >0;)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("Reversed number : %d\n", c);
    getch();
    return 0;
}
