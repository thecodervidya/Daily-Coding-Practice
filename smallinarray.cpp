#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int i,min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(a[0]<min)
		{
			min=a[i];
		}
	}
	
	cout<<"smallest num="<<min<<endl;
	return 0;
}