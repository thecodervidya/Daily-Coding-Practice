#include <stdio.h>
#include<conio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int i = 0;          
    int j = size - 1;  

    
    while (arr[i] < arr[j]) 
	{
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;   
        j--;  
    }

    
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}