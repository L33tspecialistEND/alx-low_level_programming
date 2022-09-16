#include "main.h"
#include <unistd.h>

/**
 * print_line - Prints underscore character n times
 * @n: Parameter to pass to loop in function
 */
void print_line(int n)
{
	int i;

	for (i = 1; i == n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
