#include<stdio.h>
#include<conio.h>

void main()

{
    float p,r,n,SI;
    
    printf("\n Enter principal amount : ");
    scanf("%f",&p);
    
    printf("\n Enter Rate of intrest : ");
    scanf("%f",&r);
    
    printf("\n Enter number of year :");
    scanf("%f",&n);
    
    SI=(p*r*n)/100;
    
    printf("\n Simple intrest is :%f",SI);
    
    getch();
    
}