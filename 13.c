
#include<stdio.h>
void main()
{
    int num;
    int reverse=0;
    
    printf("Enter Any Number : ");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num % 10;//rem

        reverse = reverse * 10 + rem;

        num=num/10;
        
    }
    
    printf("reverse  : %d",reverse);
    
    
    
    
    
    getchar();
}

