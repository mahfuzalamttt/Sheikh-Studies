/*
1
22
333
4444
55555
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,j;
    printf("Enter the number:");
    scanf("%d",&a);

    for ( i =1; i <= a; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}