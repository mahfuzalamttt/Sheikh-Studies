#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j;
    for ( i = 1; i <=20; i++)
    {
        for ( j = 1; j <=10; j++)
        {
            printf("%d X %d = %d \n ",i,j,i*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}