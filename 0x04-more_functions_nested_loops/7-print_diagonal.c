#include "main.h"

/**
 * print_diagonal - Prints '\' n times to create a diagonal
 * @n: Number to pass to loop in function
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92'\n');
		for (i = 1; i < n; i++)
		{
			_putchar(' ');
		}
	}
}
