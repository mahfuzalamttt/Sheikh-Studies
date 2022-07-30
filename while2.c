/*Ascending Order*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);
    i=1;
    while (i<=a)
    {
        printf("%d\n",i);
        i++;
    }
    
    getch();
    return 0;
}
