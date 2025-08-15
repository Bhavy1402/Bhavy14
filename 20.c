
#include<stdio.h>

int main()
{
    int n;

    printf("Enter how many values u wanna put : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter your values : ", n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
         {
            if (arr[j] < arr[min]) 
            {
                min = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

   
    printf("Asc order: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Descending order: ");
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
