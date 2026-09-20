#include<stdio.h>
#include<conio.h>

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
    
    printf("2 is present in array for %d times",count);
    
    return 0;
	
}