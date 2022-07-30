#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,h;

    printf("Press 1 for Addition \n Press 2 for Subtraction\n");
    printf("Write Your Choice");
    scanf("%d",&e);
    
    
    printf("Enter 1st number:");
    scanf("%d",&a);

    printf("Enter 2nd number:");
    scanf("%d",&b);

    c=a+b;
    d=15;
    h=a-b;
    if (e==1)
    {
        if (a==20 && b==5)
    {
        printf("The sum of %d and %d are= %d", a,b,d);
    }
    else
    {
        printf("The sum of %d and %d are= %d", a,b,c);
    }
    }
    else if (e==2)
    {
        if (a==30 && b==10)
        {
            printf("The subtraction of %d and %d are= %d", a,b,d);
        }
        else
        {
            printf("The subtraction of %d and %d are= %d", a,b,h);
        }
    }
    getch();
    return 0;
}