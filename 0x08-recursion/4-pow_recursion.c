#include "main.h"

/**
 * _pow_recursion - Raises an integer to the power of another integer
 * @x: First integer
 * @y: Second integer
 *
 * Return: -1, 1, x or x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return(x * _pow_recursion(x, y - 1);
}
