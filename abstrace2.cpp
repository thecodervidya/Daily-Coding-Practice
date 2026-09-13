#include<iostream>
using namespace std;
class base
{
	public:
		virtual void disp()=0;
};
class derived:public base
{
	public:
		void disp()
		{
			cout<<"SY IT"<<endl;
		}
};
int main()
{
	derived d1;
	d1.disp();
}