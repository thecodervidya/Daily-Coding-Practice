#include <iostream>
using namespace std;

int main() {
    int numbers[] = {34, 12, 89, 5, 67, 23, 91, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    
    int largest = numbers[0];
    int smallest = numbers[0];



    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}