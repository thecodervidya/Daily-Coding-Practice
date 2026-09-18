#include <stdio.h>
#include<conio.h>


int main()
{
    int numbers[] = {5, 2, 8, 1, 4};
    int sum = 0;


    for (int i = 0; i < 5; i++) 
	{
        sum = sum + numbers[i];
    }

    printf("Total Sum: %d\n", sum);

    return 0;
}