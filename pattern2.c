/*
1
12
123
1234
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,j;
    printf("Enter");
    scanf("%d",&a);

    for ( i = 1; i <=a; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}