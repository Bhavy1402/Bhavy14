#include<stdio.h>
#include<conio.h>

void main()

{
    float a,b;
    
    printf("\n Enter Number a: ");
    scanf("%f",&a);
    
    printf("\n Enter Number b: ");
    scanf("%f",&b);
    
    float add,sub,mul,di;
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    di=a/b;
    
    printf("\n Addition of two numbers : %f",add);
    printf("\n Substraction of two numbers : %f",sub);  
    printf("\n Multiplication  of two numbers : %f",mul);
    printf("\n Divison of two numbers : %f",di);
    
    
    getch();
    

    
}