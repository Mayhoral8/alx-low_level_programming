#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the fibonacci numbers
 *
 * Return: Always 0 
 */
int main(void)
{
	int sum, first, second;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 98)
	{
		sum = first + second;
		
		first = second;

		second = sum;

	
	
	}
	printf("%d, %c, %c\n", sum, ",", " ");

	return (0);

}
