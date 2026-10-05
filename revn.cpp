#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int reversedNum = 0;
    int original = num;

   
    while (num != 0) {
        int lastDigit = num % 10;               
        reversedNum = reversedNum * 10 + lastDigit; 
        num /= 10;                              
    }

    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}