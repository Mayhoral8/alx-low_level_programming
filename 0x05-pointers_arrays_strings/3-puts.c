#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}

	_putchar('\n');
}
