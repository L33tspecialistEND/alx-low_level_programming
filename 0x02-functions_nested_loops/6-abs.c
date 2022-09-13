#include "main.h"

/**
 * _abs - Prints the absolute value of a number
 *
 * Return: 0
 */
int _abs(int)
{
	int a;

	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * -1;
		return (a);
	}
	return (0);
}
