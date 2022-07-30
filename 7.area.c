#include<stdio.h>
#include<conio.h>
int main()
{
    float area, r;
    printf("Enter radius of circle=");
    scanf("%f", & r);
    area=3.14*r*r;
    printf("Area of circle=%f", area);
    getch();
    return 0;
}