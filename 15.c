#include<stdio.h>
void main()
{
    int num;
    int B=0; // B=biggest number
    
    printf("Enter Any Number : ");
    scanf("%d",&num);
    

    

    while(num>0)
    {
        
        int rem = num % 10;

        if (rem>B)

        {
            B=rem;
        }
        num=num/10;
    }
        
        
    


   
    printf("biggest : %d",B );
    
    
    
    
    
    getchar();
}