#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Descending order from 1 to 10\n");
    for ( i = 10; i>=1; i--)
    {
        printf("%d\t", i);
    }
    getch();
    return 0;
}