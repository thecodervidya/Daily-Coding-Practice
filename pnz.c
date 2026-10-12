#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int p=0,n=0,z=0;
	for(int i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			p++;
		}
		else if(a[i]<0)
		{
			n++;
		}
		
		else
		{
			z++;
		}
	
   }
   
   printf("poditive num=%d\n",p);
    printf("negative num=%d\n",n);
     printf("zero num=%d",z);
}