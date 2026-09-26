#include <iostream>
using namespace std;

int main() 
{
    int arr[7] = {2, 5, 8, 2, 9, 5, 3};
    int size = 7;

    cout << "Duplicate elements: ";

    for (int i = 0; i < size; i++) 
	{
        
        for (int j = i + 1; j < size; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    cout << endl;
    return 0;
}