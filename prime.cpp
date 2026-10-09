#include <iostream>
using namespace std;

int main() 
{
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Count factors of the number
    for (int i = 1; i <= num; i++) 
	{
        if (num % i == 0) {
            count++;
        }
    }

    // A prime number has exactly 2 factors: 1 and itself
    if (count == 2) 
	{
        cout << num << " is a prime number." << endl;
    } 
	
	else 
	{
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}