#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5; // size of the array

    // Reverse the array directly in main
    for (int i = 0; i < n /2; i++) 
	{
        // Swap front element with back element
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print the reversed array
      cout << "Reversed array: ";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }

    return 0;
}