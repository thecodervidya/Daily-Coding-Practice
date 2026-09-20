#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int i,even=0,odd=0;
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		
		else if(a[i]%2!=0)
		{
			odd++;
		}
		else
		{
			cout<<"num is invalid"<<endl;
		}
	}
	
	cout<<"count of even numbers="<<even<<endl;
	cout<<"count of odd numbers="<<odd<<endl;
	return 0;
	
	
}