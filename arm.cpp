#include <iostream>
using namespace std;

int main() 
{
    int num, temp, digit;
    int sum = 0;

    
    cout << "Enter a 3-digit number: ";
    cin >> num;
    
    
    temp = num;

    
    while (temp > 0) 
	{
        digit = temp % 10;             
        sum += digit * digit * digit; 
        temp /= 10;                    
    }

    
    if (sum == num) 
	{
        cout << num << " is an Armstrong number!" << endl;
    } 
	
	else 
	{
		
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}