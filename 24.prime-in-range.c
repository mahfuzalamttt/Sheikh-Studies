#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,j,i;
    printf("Enter starting range:");
    scanf("%d",&a);

    printf("Enter Ending range:");
    scanf("%d", &b);

    printf("All the prime numbers in the given range %d and %d are:", a,b);

    for ( i = a; i <=b; i++)
    {
        c=0;
        for ( j =1 ; j <= i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
            
        }
        if (c==2)
        {
            printf("%d\n",i);
        }
        
    }
    getch();
    return 0;
}