#include "main.h"
/**
 * print_numbers - program 
 *
 * Description: print
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	a = '48';

	while (a < '58')
	{
		_putchar(a);

		a++;
	} 
	_putchar(10);
	return (0);
}
