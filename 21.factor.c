#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the Number=");
    scanf("%d", &a);
    printf("The factors of %d are :\n" ,a);

    for(i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            printf("%d\n",i);
        }
    }
    getch();
    return 0;
}