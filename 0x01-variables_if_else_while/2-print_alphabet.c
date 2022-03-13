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
	int norm;
	int lwcase;

	norm = putchar(65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,
			86,87,88,89,90);
	lwcase = tolower(norm);
	return (0);

}

