#include "main.h"
/**
 * print_array - fp
 * @a: ff
 * @n: sf
 * Return: void
 */
void print_array(int *a, int n)
{
	 int i;

        i = 0;
        for (n--; n >= 0; n--, i++)
        {
                _putchar("%d", a[i]);
                if (n > 0)
                {
                        _putchar(", ");
                }
        }
        _putchar("\n");

}
