#include <iostream>
using namespace std;

int main() 
{
    int rows = 5;

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) 
	{
        
        // Inner loop prints numbers from 1 up to the current row number
        for (int j = 1; j <= i; j++) 
		{
            cout << j;
        }
        
        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}