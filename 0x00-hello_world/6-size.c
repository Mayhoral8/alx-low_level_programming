#include <stdio.h>
/**
 * main - print the size of various types
 *
 * Description - prints the size of various types on the computer it is
 * compiled and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char: %d byte(s)\n", (int) sizeof(c));
	printf("size of an int: %dbyte(s)\n", (int) sizeof(i));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(li));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long lo
				ng lli));
	printf("size of a float: %d byte(s)\n", (int) sizeof(f));

	return (0);
}
