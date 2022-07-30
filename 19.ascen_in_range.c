#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    printf("Enter starting range:");
    scanf("%d", &a);

    printf("Enter Ending range:");
    scanf("%d", &b);

    for ( i = a; i<=b; i++)
    {
        printf("%d\n", i);
    }
    getch();
    return 0;
}