#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Desription - fimile
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last);
	else if (last == 0)	
		printf("Last digit of %d is %d and is 0", n, last);
	else (n < 6 && || 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	/* your code goes there */
	return (0);
}
