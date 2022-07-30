/*Armstrong number in range*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,i,j;
    printf("starting range:");
    scanf("%d",&a);

    printf("ending range:");
    scanf("%d",&b);

    i=a;
    while (i<=b)
    {
        d=0;
        j=i;
        while (j>0)
        {
            c=j%10;
            d=d+(c*c*c);
            j=j/10;
        }
        if (d==i)
        {
            printf("%d\n",i);
        }
        i++;
    }
    getch();
    return 0;
}