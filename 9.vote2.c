#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age>18)
    {
        printf("Eligible");
    }
    else if (age==18)
    {
        printf("please make your voter-card");
    }
    
    else
    printf("Not Eligible");

    getch();
    return 0;
}