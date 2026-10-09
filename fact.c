#include <stdio.h>
#include<conio.h>



int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int x,result;
	
	printf("Enter x=");
	scanf("%d",&x);
	result=fact(x);
	
	printf("Result=%d",result);
}