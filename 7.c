#include<stdio.h>
#include<conio.h>

void main()

{
    int guj,hindi,eng,math,sci;
    
    printf("\n Enter marks of Gujarati :");
    scanf("%d",&guj);
    
     printf("\n Enter marks of Hindi :");
    scanf("%d",&hindi);
    
     printf("\n Enter marks of English :");
    scanf("%d",&eng);
    
     printf("\n Enter marks of maths :");
    scanf("%d",&math);
    
     printf("\n Enter marks of science :");
    scanf("%d",&sci);
    
    float per,sum;
    
    sum=guj+hindi+eng+math+sci;
    
    per=(sum*100)/500;
    printf("\n total marks of five subjects :%f",sum);
    
    printf("\n percentage is :%f",per);
    
    getch();
    
    
}