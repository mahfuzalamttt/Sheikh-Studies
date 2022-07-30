#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("It is even number.");
    
    }
    else
    printf("It is odd number.");
    
    getch();
    return 0;
}