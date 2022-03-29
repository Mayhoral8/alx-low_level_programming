#include "main.h"
/**
 * puts_half - function that prints half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
