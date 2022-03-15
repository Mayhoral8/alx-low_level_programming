#include "main.h"
/**
 * main - Body
 *
 * Description: 10x alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 0)
	{
		letter = 'a';
		
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
	
		}
		_putchar('\n');

		round++;
	}
}

