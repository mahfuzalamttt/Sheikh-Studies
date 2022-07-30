#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("Enter the Temperature:");
    scanf("%f", &f);
    c=((f-32)*5)/9;
    printf("Temperature in Celsius=%f", c);
    getch();
    return 0;
}