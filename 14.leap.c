#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d", &a);
    if (a%4==0) 
    {
        printf("It is a Leap Year.");
    
    }
    else
    printf("It is not a Leap Year.");

    getch();
    return 0;
}