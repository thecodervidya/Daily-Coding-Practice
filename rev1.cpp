#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string text;

    cout << "Enter text: ";
    cin >> text;

    int i = 0;
    int j = text.length() - 1;

    
    while (i < j) 
	{
        char temp = text[i];
        text[i] = text[j];
        text[j] = temp;

        i++;
        j--;
    }

    cout << "Reversed text: " << text << endl;

    return 0;
}