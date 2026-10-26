#include <iostream>
using namespace std;

int f(int n) 
{
    return n < 10 ? n : (n % 10) * f(n / 10);
}

int main() 
{
    cout << f(234);
}