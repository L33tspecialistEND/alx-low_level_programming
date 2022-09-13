#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @l: Number to pass to print_last_digit function
 *
 * Return: 0
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	return (l);
}
