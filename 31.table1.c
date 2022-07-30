#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,i,j;
    printf("Table from:");
    scanf("%d",&a);

    printf("To:");
    scanf("%d",&b);

    for ( i = a; i <= b; i++)
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