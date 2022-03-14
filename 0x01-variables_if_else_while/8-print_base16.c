#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Let's go
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
