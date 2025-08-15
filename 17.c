
#include<stdio.h>
void main()
{
    int n,i=0,a=0,b=1,c;  //a=first number, b=second number in series, c= new next number

    printf("enter fibonacci number n : ");
    scanf("%d",&n);


    while(i<n)

    {
        printf("%d",a);
        c  =  a +  b;
    
        a = b;

        b = c;

        i++;


    }

    

    getchar();
}
