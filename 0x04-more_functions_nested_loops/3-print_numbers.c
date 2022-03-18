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

	for (a= '48';a < '58'; a++)
	{
		_putchar(a);

		a++;
	} 
	_putchar(10);

	return (0);
}
