#include <iostream>
using namespace std;

int main() 
{
    int arr[6] = {10, 25, 40, 55, 70, 85};
    int size = 6;
    int key;
    bool found = false;

    cout << "Enter the number you want to search for: ";
    cin >> key;

    
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == key) 
		{
            cout << "Number " << key << " found at index " << i << "." << endl;
            found = true;
            break; 
        }
    }

  
    if (!found) 
	{
        cout << "Number " << key << " does not exist in the array." << endl;
    }

    return 0;
}