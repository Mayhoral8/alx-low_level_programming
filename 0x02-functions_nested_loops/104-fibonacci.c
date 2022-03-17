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
	int sum, first, second count;
	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (sum < 98)
	{
		sum = first + second;
		printf("%d, ", sum);
		first = second;

		second = sum;

		count ++;
	
	}
	sum = first + second;
	printf("%d\n", sum);

	return (0);

}
