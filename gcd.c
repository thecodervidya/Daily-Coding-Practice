#include <stdio.h>

int main() 
{
    int a = 12, b = 18;
    int gcd = 1;

    
    for (int i = 1; i <= a && i <= b; i++) 
	{
        
        if (a % i == 0 && b % i == 0) 
		{
            gcd = i;
        }
    }

    printf("Input: %d, %d\n", a, b);
    printf("Output: %d\n", gcd);

    return 0;
}