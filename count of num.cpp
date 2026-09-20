#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,2,2,3,4};
	int i,count=0;
	
	for(i=0;i<5;i++)
	{
	
	if(a[i]==2)
	{
	count++;	
	}
    }
    
    cout<<"2 present in array for ="<<count<<endl;
    
    return 0;
	
}