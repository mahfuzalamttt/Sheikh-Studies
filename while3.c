/*Descending Order*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);
    i=a;
    while (i>=1)
    {
        printf("%d\n",i);
        i--;
    }
    getch();
    return 0;
}
