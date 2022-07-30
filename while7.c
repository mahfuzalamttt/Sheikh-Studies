/*Armstorng Number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d=0,i,j;
    printf("Is this number is armstrong number?");
    scanf("%d",&a);
    
    b=a;
    while (b>0)
    {
        c=b%10;
        d=d+(c*c*c);
        b=b/10;
        i++;
    }
    if (d==a)
    {
        printf("Yes, %d is a armstrong number.",a);
    }
    else
    {
        printf("No, %d is not a armstrong number. ",a);
    }

    
    getch();
    return 0;
}