#include <iostream>
using namespace std;


int reverseNum(int n, int rev = 0) 
{
    
    if (n == 0) 
	{
        return rev;
    }
    
    
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() 
{
    int n = 12345;
    
    cout << "Original Number: " << n << endl;
    cout << "Reversed Number: " << reverseNum(n) << endl;

    return 0;
}