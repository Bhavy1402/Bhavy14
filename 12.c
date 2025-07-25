#include<stdio.h>
#include<conio.h>
void main()
{
    float b,h,l,r,pi,at,ar,ac;
    
    int x;
    pi=3.14;
    
    printf("\n Enter Any Number Between 1 to 3: ");
    scanf ("%d",&x);
    
    if (x==1)
    
        {
            printf("\n Enter Base of Traingle: ");
            scanf("%f",&b);
            printf("\n Enter Height of Triangle: ");
            scanf("%f",&h);
            at=(h*b)/2;
            printf("\n Area of Traingle: %f",at);
        }
    
    else if (x==2)
        {
            printf("\n Enter Length of Rectangle: ");
            scanf("%f",&l);
            printf("\n Enter Height of Rectangle: ");
            scanf("%f",&h);
            ar=(l*h);
            printf("\n Area of Rectangle: %f",ar);
        }
    
    else if (x==3)
    {
        printf("\n Enter Radius of Circle:");
        scanf("%f",&r);
        ac=pi*r*r;
        printf("\n Area of Circle: %f",ac);
    }
    
    else{
        printf("\n Entered Number is Invalid");
        }
        getch();   
}