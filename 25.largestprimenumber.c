#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,i,j;
    printf("Enter Starting Range:");
    scanf("%d", &a);

    printf("Enter Ending Rnage:");
    scanf("%d", &b);
    for ( i = b; i >=a; i--)
    {
        c=0;
        for ( j =1 ; j <=i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c==2)
        {
            printf("The largest prime number given range=%d",i);
            break;
        }
    }
    getch();
    return 0;
}