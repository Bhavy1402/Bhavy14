
#include<stdio.h>
void main()
{
    int num;
    int a,b,c; //a=mod of first digit , b=last ,c=a+b
    
    printf("Enter Any Number : ");
    scanf("%d",&num);
    

    b = num % 10;

    while(num>0)
    {
        int rem = num % 10;//rem

        a = num - rem / 10;

        if(a<=9 )

        {
            a=a ;
        }

        else
        {

        }
        num=num/10;
        
    }

    c=a+b;


    printf("sum of last and first digit : %d",c );
    
    
    
    
    
    getchar();
}
