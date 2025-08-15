#include<stdio.h>
#include<string.h>

int main()

{
    
    int num,sub[100][3],total[100],pass=0,fail=0,topper=0,loser=0;
    char name[100][30];
    float avg[100],high=0,low=0;


    printf("enter number of students : ");
    scanf("%d",&num);                               // use of '&' when u have to put value in address 


    for(int i=0; i< num;i++)
    {
        printf("\nEnter name of student %d : ",i+1);
        scanf("%s",name[i]);                       // here '&' is not needed bcz string 'NAME'(that we define that we give) is address it self
        total[i]=0;

       for(int j = 0; j<3 ;j++)
       {
        
        printf("\nEnter marks of sub %d : ",j+1);
        scanf("%d",&sub[i][j]);

        
        total[i] += sub[i][j];
       }

     avg[i]=0;
     avg[i] = total[i]/3.0;

     if(avg[i] >= 40)
     pass++;
     else
     fail++;


     if(avg[i] > high)
     {

     high = avg[i];
     topper = i;                              //for printf in end index
     }


     if(avg[i] < low)
     {
     low = avg[i];
     loser = i;
     }


    }

    printf("\n--------Student report----------");
 
    printf("\nName       Total       avg        result");

    for(int i=0;i < num;i++)
    {

    printf("\n%s         %d          %2f           %s",name[i],total[i],avg[i], (avg[i] >= 40) ? "pass" : "fail");
        






    }
    printf("\nTopper: %s  (%2f)", name[topper], avg[topper]);
    printf("\nLoser:  %s  (%2f)", name[loser], avg[loser]);
    printf("\nPassed: %d", pass);
    printf("\nFailed: %d", fail);


return 0;

}


    




























