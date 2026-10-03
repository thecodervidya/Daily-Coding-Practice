#include<iostream>
using namespace std; 
int main()
{
	char a[5];
	int i,count=0;
	cout<<"Enter array characters="<<endl;
	cin>>a[i];
	for(i=0;i<5;i++)
	{
		scanf("%s",&a[i]);
	}
	
	char key;
	cout<<"Enter key=";
	cin>>key;
	
	for(i=0;i<5;i++)
	{
		if(key=='a'||key=='e'||key=='i'||key=='o'||key=='u')
		{
			count++;
		}
		
	}
	cout<<"num of ovels="<<count<<endl;
	return 0;
	
	
	
}