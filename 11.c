#include<stdio.h>

void main()
{

    float a,b,sum,diff,multi,divi;
    int select;

    printf("enter value of a : ");
    scanf("%f",&a);

    printf("enter value of b : ");
    scanf("%f",&b);


    printf("\npress 1 to get sum");
    printf("\npress 2 to get difference");
    printf("\npress 3 to get multi");
    printf("\npress 4 to get division");

    
    sum=a+b;
    diff=a-b;
    multi=a*b;
    divi=a/b;

    printf("\nenter value of select : ");
    scanf("%d",&select);


    switch(select)

    {
       
        case 1 : printf("\nsum of a & b is : %f ",sum);
        break;

        
        case 2 : printf("\ndiff of a & b is : %f ",diff);
        break;

        case 3 : printf("\nmulti of a & b is : %f ",multi);
        break;

        case 4 : printf("\ndivi of a & b is : %f ",divi);
        break;

        default : printf("\nnot posssible");
        break;
    }


    getchar();
}