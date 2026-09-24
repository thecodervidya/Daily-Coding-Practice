#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size < 2) 
	{
        printf("Array must have at least two numbers.\n");
        return 0;
    }

    
    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < size; i++)
	{
        // Case 1: Found a new maximum
        if (arr[i] > largest) {
            second = largest; // Old largest drops to second place
            largest = arr[i]; // Update largest
        } 
        // Case 2: Found a number between largest and second
        else if (arr[i] > second && arr[i] != largest)
		{
            second = arr[i];
        }
    }

    if (second == -1) 
	{
        printf("There is no distinct second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}