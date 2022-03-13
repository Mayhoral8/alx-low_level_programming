#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: program to print all alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i< 127)
	{
		putchar(i);
			i++;
	}
	putchar(10);

	return (0);

}

