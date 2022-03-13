#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program that prints alphabets except e and q
 *
 * Return: Always (0)
 */
int main(void)
{
	int i = 97;

	while (i != 101 && i != 113)
		putchar(i);
		i++;
		return (0);

}
