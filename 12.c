#include<stdio.h>

void main()

{

    float b,h,l,w,pi,r,aT,aR,aC;
    int select;

    printf("\nfirst decide what shape's area do u want to find-> ");
    printf("\n1-Triangle");
    printf("\n2-Rectangle");
    printf("\n3-Circle");

    printf("\nSelect the number for desired area shape from 1-3 : ");
    scanf("%d",&select);

    if (select == 1)

    {
       
        printf("\nEnter length of base : ");
        scanf("%f",&b);
        printf("\nEnter height of triangle : ");
        scanf("%f",&h);

         aT=b*h/2;
        printf("\nArea of Triangle is : %f ",aT);

    }
    
    else if(select == 2)

    {
        
        printf("\nEnter length of rectangle : ");
        scanf("%f",&l);
        printf("\nEnter width of rectangle : ");
        scanf("%f",&w);

        aR=l*w;
        printf("\nArea of Rectangle is : %f ",aR);

    }


    else if(select == 3)

    {
        
        

        printf("enter radius of circle : ");
        scanf("%f",&r);

        aC=pi*r*r;
        pi=3.14;
        printf("\nArea of Circle is : %f ",aC);

    }

    else
    {
        printf("\nPlease Select from given shape menu");
    }


    getch();
}