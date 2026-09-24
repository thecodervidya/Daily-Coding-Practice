#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {5, 2, 1, 5, 2, 1};
    int i,a=0,b=0,c=0;
    for(i=0;i<6;i++)
    {
    	
        if(arr[i]==1)
        {
    	a++;
     	}
	
	else if(arr[i]==2)
	{
		b++;
	}
	
	else if(arr[i]==5)
	{
		c++;
	}
	
	else
	{
		cout<<"num is invalid"<<endl;
	}
}
cout<<"frequency of 1="<<a<<endl;
cout<<"frequency of 2="<<b<<endl;
cout<<"frequency of 5="<<c<<endl;
return 0;
}
