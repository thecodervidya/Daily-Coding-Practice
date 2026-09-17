#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int n=5,max = a[0],i;
	
	for(i=0;i<n;i++)
	{
		if (a[i] > max)
		{ 
            max = a[i]; 
        }
	} 
	
	cout<<"Largest number in array="<<max<<endl;
	return 0;
}