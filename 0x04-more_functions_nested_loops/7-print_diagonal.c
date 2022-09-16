#include "main.h"

/**
 * print_diagonal - Prints '\' n times to create a diagonal
 * @n: Number to pass to loop in function
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar(92'\n');
	}
}
