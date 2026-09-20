#include<stdio.h>
#include<conio.h>
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
			printf("number is invalid");
		}
	}
	
	printf("\n count of even numbers=%d",even);
	printf("\n count of odd numbers=%d",odd);
	return 0;
	
	
}