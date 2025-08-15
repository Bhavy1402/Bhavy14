
#include<stdio.h>

int main()
 {
    int arr[10], i,j,temp,min;
    
    printf("\nEnter 10 values : ");

    for(i=0; i<10; i++)
    {  
    scanf("%d", &arr[i]);
    }
 
     for(i = 0; i < 9; i++) 
    {  
         min=i;
     
        for(j=i+1;j<10;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
         
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }

    printf("\nAscending order : ");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    
    printf("\nDescending order : ");

    for(i = 9; i >= 0; i--)
        printf("%d ", arr[i]);


    printf("\n");
    return 0;
}

