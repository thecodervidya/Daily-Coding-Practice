#include <iostream>
using namespace std;

class Rectangle 
{
private:
    int length, width;

public:
   
    Rectangle(int l, int w) : length(l), width(w) {}

   
    int getArea() 
	{
        return length * width;
    }
};

int main() 
{
    Rectangle r(5, 3);
    cout << "Area: " << r.getArea() << endl;
    return 0;
}