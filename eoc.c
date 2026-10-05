#include <stdio.h>

int main() 
{
    int numbers[9] = {12, 7, 9, 20, 15, 8, 4, 3, 11};
    //int size = sizeof(numbers) / sizeof(numbers[0]);
    int size=9;

    int even = 0;
    int odd = 0;

   
    for (int i = 0; i < size; i++) 
	{

        if (numbers[i] % 2 == 0) 
		{
            even++;
        } 
		
		else 
		{
            odd++;
        }
    }

   
    printf("Array elements: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}