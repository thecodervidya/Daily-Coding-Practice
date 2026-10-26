#include <iostream>
using namespace std;

int main() 
{
    int arr[5] = {0, 1, 0, 3, 12};
    int n = 5;
    int pos = 0;

   
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] != 0) 
		{
            arr[pos++] = arr[i];
        }
    }

  
    while (pos < n) 
	{
        arr[pos++] = 0;
    }

    
    cout << "Output: {";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << (i < n - 1 ? ", " : "");
    }
    cout << "}" << endl;

    return 0;
}