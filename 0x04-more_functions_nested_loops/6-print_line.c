#include "main.h"

/**
 * print_line - Prints underscore character n times
 * @n: Parameter to pass to loop in function
 */
void print_line(int n)
{
	int i;

	if (n <= 48)
	{
		_putchar('\n');
	}
	for (i = 49; i == n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
