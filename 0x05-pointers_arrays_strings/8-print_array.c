#include "main.h"

/**
 * print_array - Prints n elements on an array
 * @a: Array passed to the function
 * @n: Number of elements to prints
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i == (n - 1))
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
