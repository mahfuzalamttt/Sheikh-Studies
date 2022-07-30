/*Prime number in range*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,j,i;
    printf("Enter starting range:");
    scanf("%d",&a);
    printf("Enter ending range:");
    scanf("%d",&b);
    
    printf("All the prime number in the given range %d and %d :\n", a,b);

    i=a;
    while (i<=b)
    {
        c=0;
        j=1;
        while (j<=i)
        {
            if (i%j==0)
            {
                c++;
            }
            j++;
        }
        if (c==2)
        {
        printf("%d\n",i);
        }
        i++;
    }
    getch();
    return 0;
}
