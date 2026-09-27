#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50}; // The list of numbers
    int size = 5;                     // Total items in the list
    int key;                       // The number to find
    int Index = -1;              // Stores location if found

    cout << "Enter number to search: ";
    cin >> key;

    // Check each item one by one from start to end
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == key) 
		{
            Index = i; // Save the position
            break;          // Stop searching once found
        }
    }

    // Print the result
    if (Index != -1) 
	{
        cout << "Found at index " << Index << endl;
    } 
	
	else 
	{
        cout << "Not found" << endl;
    }

    return 0;
}