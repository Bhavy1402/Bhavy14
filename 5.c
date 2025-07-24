#include<stdio.h>
#include<conio.h>

void main()

{
    float area,b,h;
    
    printf("\n Enter base of triangle : ");
    scanf("%f",&b);
    
    printf("\n Enter height of triangle : ");
    scanf("%f",&h);
    
    area=(b*h)/2;
    
    printf("\n Area of traingle :%f",area);
    
    getch();
    
    
    
}