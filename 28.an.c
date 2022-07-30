#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d=0;
    printf("Is this number is Armstrong Number? ");
    scanf("%d",&a);

    b=a;
    for (;b>0;)
    {
        c=b%10;
        d=d+(c*c*c);
        b=b/10;
    }
    if (d==a)
    {
        printf("Yes %d is Armstrong Number.",a);
    }
    else
    {
        printf("No %d is not Armstrong Number.", a);
    }
    getch();
    return 0;
}
