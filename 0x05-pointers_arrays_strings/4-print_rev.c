#include "main.h"
/**
 * print_rev - program to print in reverse
 * @*s: char string
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (s != '\0')
	{
		s++;
		count++;
	}

	for (count = 0 ; count > 0; count --)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
