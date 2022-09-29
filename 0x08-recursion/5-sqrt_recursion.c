#include "main.h"

/**
 * root_check - Checks if g is the root of x
 * @g: Guess
 * @x: Integer to find the root of
 *
 * Return: -1 or root of x
 */
int root_check(int g, int x)
{
	if (g * g == x)
		return (g);
	if (g * g > x)
		return (-1);
	return (root_check(g + 1, x));
}

/**
 * _sqrt_recursion - Returns square root of a number
 * @n: Integer to find root of
 *
 * Return: 0 or root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root_check(1, n));
}
