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
	long int sum;
       	long int first, second;
       	count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (sum < 135301852344706746049)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;

		second = sum;

		count ++;
	
	}
	sum = first + second;
	printf("li\n", sum);

	return (0);

}
