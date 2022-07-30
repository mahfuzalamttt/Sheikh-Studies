#include<stdio.h>
#include<conio.h>
int main()
{
    int b ,f;
    printf("Enter a Number=");
    scanf("%d",&b);
    printf("Enter second Number");
    scanf("%d",&f);
    printf("%d \t",b);
    printf("%d \a",f);
   //(\t=tab for space, \n=new line, \a=alert for sound )
    getch();
    return 0;
}