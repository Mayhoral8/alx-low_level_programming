#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: Program that check for alphabets
 *
 * @c: c is an ascii character
 *
 * Return: 1 if it's not a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
