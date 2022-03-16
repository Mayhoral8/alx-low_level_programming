#include "main.h"
/**
 * print_sign — Entry point
 *
 * Description: program that prints sign
 *
 * @n: an ascii character
 *
 * Return: 1 if +, 0 if 0 -1, if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
