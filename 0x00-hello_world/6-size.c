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

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(i2));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(i3));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));

	return (0);
}
