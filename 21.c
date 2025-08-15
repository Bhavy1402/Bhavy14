
#include<stdio.h>
int main()
{
    
    int a[3][3],b[3][3],result[3][3]={0};
    int i,j,k;
  
    printf("Enter 1st matrix of 3*3: ");  
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);  
        }
    }
    
    printf("Enter 2nd matrix of 3*3: ");  
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);  
        }
    }
    
    for(i=0;i<3;i++)                 //row
    {
        for(j=0;j<3;j++)             //col
        {
            for(k=0;k<3;k++)
            {
               result[i][j]+= a[i][k]*b[k][j]; 
                
            }
        }
    }
    
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf(" %d",result[i][j]);
            
        }
        printf("\n");
    }  

    return 0;
}
