#include <stdio.h>
# include<conio.h>// Header for standard input/output

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50}; // Array of numbers
    int size = 5;                     // Total elements
    int target;                       // Number to search
    int foundIndex = -1;              // Default value (-1 means not found)

    printf("Enter number to search: ");
    scanf("%d", &target);             // Get user input

    // Loop through the array sequentially
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == target) 
		{
            foundIndex = i;           // Store matching index
            break;                    // Stop searching
        }
    }

    // Output the result
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("Not found\n");
    }

    return 0;
}