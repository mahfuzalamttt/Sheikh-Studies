#include<stdio.h>
#include<conio.h>
int main()
{
    int a,c=0,i;
    printf("Enter a number:");
    scanf("%d", &a);

    for ( i =1; i <=a; i++)
    {
        if (a%i==0)
        {
            c++;
        }
        
    }
    if (c==2)
    {
        printf("%d It's a prime number.",a);
    }
    else
    {
         printf("%d It's not a prime number.",a);
    }
    getch();
    return 0;
}