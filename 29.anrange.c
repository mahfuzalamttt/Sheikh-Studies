#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,i,j,f;
    printf("Enter starting range:");
    scanf("%d", &a);

    printf("Enter ending range:");
    scanf("%d", &b);
    printf("Armstrong Number in the given range from %d to %d are\n", a,b);

    
    for (i=a;i<=b;i++)
    {
        d=0;
        j=i;
        for (; j > 0;)
        {
            c=j%10;
            d=d+(c*c*c);
            j=j/10;
        }
        if (d==i)
        {
            printf("%d\n",i);
        }
    }
    
    getch();
    return 0;
}