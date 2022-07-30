#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d=0,e,f,i;
    printf("Enter 1st number:");
    scanf("%d",&a);
    
    printf("Enter 2nd number:");
    scanf("%d",&b);
    c=a+b;

    for ( i =2; i <=c; i++)
    {
        if (a%i==0 && b%i==0)
        {
            printf("The HCF of %d and %d is= %d", a,b,i);
            d=i; //d means HCF
            break;       
        }
    }
    if (d<2)
    {
        printf("The HCF of %d and %d is 1\n", a,b);
        d=1;
        d=i;
    }
    e=a*b;  //e means PRODUCT
    f=e/d;  //f means LCM 
    printf("The LCM of %d and %d is= %d", a,b,e);
    getch();
    return 0;
}