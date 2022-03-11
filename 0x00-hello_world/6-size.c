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
	long int i2;
	long long int i3;
	float f;

	printf("size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("size of an int: %dbyte(s)\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", (int) sizeof(long lo
				ng int));
	printf("size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
