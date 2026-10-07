#include <stdio.h>
#include <limits.h>

int main() 
{
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int size = 6;

    if (size < 2) 
	{
        printf("Array needs at least two elements.\n");
        return 0;
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) 
	{
        if (arr[i] > largest) 
		{
            second_largest = largest;
            largest = arr[i];
        } 
		
		
		else if (arr[i] > second_largest && arr[i] != largest) 
		{
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) 
	{
        printf("There is no distinct second largest element.\n");
    }
	 
	 
	 else 
	 {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}