#include "main.h"
/**
 * more_numbers - Program that writrd 10x
 * Return: Always 0
 */
void more_numbers(void)
{
	int j;
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar("\n");
		for ( j = '0'; j <= '14'; j++)
		_putchar(j);
	}
	return (0);
}
