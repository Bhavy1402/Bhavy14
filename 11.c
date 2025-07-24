#include<stdio.h>
#include<conio.h>

void main()

{
    //float a,b,add,sub,mul,di;
    
    int num;
    

    printf("\n Enter any number between 1 to 4 :");
    scanf("%d",&num);
    
        if(num ==1)
        
        {
            printf("\n Addition ");
        }
        
        else if(num ==2)
        
        {
            printf("\n Substraction ");
        }
        
        else if(num ==3)
        
        {
            printf("\n Multiplication ");
        }
        
        else 
        
        {
            printf("\n Division");
        }
        getch();
        
}