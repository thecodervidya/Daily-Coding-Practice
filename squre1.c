#include <stdio.h>

int main() 
{
	int number;
    float  square;


    printf("Enter a number: ");
    scanf("%d", &number);

    
    square = number * number;


    printf("The square of %.2f is %.2f\n", number, square);

    return 0;
}