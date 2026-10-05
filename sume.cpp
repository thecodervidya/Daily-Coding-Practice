#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int sum = 0;

    
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

   
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}