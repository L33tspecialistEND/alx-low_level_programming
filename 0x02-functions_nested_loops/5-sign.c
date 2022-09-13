#include "main.h"

/**
 * print_sign - Checks and prints the sign of a number
 * @n: Number to pass to print_sign function
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	 	return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
		_putchar('-');
	}

	return (0);
}
