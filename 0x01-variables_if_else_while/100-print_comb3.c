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
	{
	putchar(i);
		if (i != j && j >= 49 )
		{
			putchar(j);
			putchar(44);
			putchar(32);
		}
		i++;
	}	
	putchar(10);
	return (0);
}

