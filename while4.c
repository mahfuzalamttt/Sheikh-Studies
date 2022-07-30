/*Factor*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,i;
    printf("enter the number:");
    scanf("%d",&a);
    i=1;
    while (i<=a)
    {
        if(a%i==0)
        {
            printf("%d ;",i);
            
        }
        i++;
    }
    

    getch();
    return 0;
}
