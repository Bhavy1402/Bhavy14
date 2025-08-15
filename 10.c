#include<stdio.h>

void main()

{

int nday;

printf("\nenter the num of day: ");
scanf("%d",&nday);

switch(nday)
{

       case 1:printf("\n monday");
       break;
       case 2:printf("\n tue");
       break;
       case 3:printf("\n wed");
       break;
       case 4:printf("\n thursday");
       break;
       case 5:printf("\n friday");
       break;
       case 6:printf("\n saturday");
       break;
       case 7:printf("\n sunday");
       break;

       default:printf("\nGiven num is not valid");
       break;
}
  

getchar();


}