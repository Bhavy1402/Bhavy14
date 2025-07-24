#include<stdio.h>
#include<conio.h>

void main()

{
    float radius,pi;
    
    pi=3.14;
    
    printf("\n Enter Radius of Circle : ");
    scanf("%f",&radius);
    
    float area;
    
    area=pi*radius*radius;
    
    printf("\n Area of circle is :%f",area);
    
    getch();
    
    
}