#include<stdio.h>
#include<conio.h>

void main()

{
    float a;
    
    printf("\n Enter any number :");
    scanf("%f",&a);
    
    if(a>0)
    {
        printf("\n The given number is Positive");
    }
    else
    {
        printf("\n The given number is Negative");
    }
    
    getch();
    
}