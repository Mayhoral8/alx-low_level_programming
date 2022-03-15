#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: combination of two
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 58;

	while (i < 58)
	{ j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j > 57)
			{
			putchar(44);
			putchar(32);
			}
			j++;
		}

		i++;
	}
	putchar(10);
	return (0);
}

