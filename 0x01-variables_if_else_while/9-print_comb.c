#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints possible combination with space and commas
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar (32);
		}
		
		i++;

	}
	putchar(10);
	return(0);

}
