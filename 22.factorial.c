#include<stdio.h>
#include<conio.h>
int main()
{
    int a,fact=1,i;
    printf("Enter the number:");
    scanf("%d",&a);

    for ( i = a; i>=1; i--)
    {
        fact=fact*i;
    }
    printf("Fatorial of the %d is = %d", a, fact);
    
    getch();
    return 0;
}