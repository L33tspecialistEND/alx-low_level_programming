#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 * @n: Number passed to _abs function
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
