#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Number of times:");
    scanf("%d",&a);
    i=1;
    while (i<=a)
    {
        printf("It`s me\n");
        i++;
    }
    
    getch();
    return 0;
}