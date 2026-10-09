#include<iostream>
using namespace std;
class addition
{
	public:
	int a,b,c;
	addition()
	{
		
	}
	addition(int x,int y)
	{
		a=x;
		b=y;
	}
	void disp()
	{
		c=a+b;
		cout<<"Addition="<<c<<endl;
	}
};
int main()
{
	addition a1;
	addition a2(10,20);
	a1.disp();
}