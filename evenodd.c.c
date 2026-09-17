#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter value of a=");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("even");
	}
	else{
		printf("odd");
	}
	getch();
}