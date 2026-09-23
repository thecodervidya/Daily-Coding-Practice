#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = -1; 

    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > largest)
		{
            secondLargest = largest;
            largest = arr[i];
        } 
		else if (arr[i] > secondLargest && arr[i] != largest) 
		{
            secondLargest = arr[i];
        }
}

    std::cout << "Array: ";
    for (int i = 0; i < n; i++)
	{
        std::cout << arr[i] << " ";
    }
    std::cout << "\nSecond largest element is: " << secondLargest << std::endl;

    return 0;
}