#include "main.h"
/**
 * swap_int - program that swaps
 *
 * @a: variable
 * @b: variable
 * Return: Always
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	
	*a = *b;
	*b = n;
}
