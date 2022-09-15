#include "main.h"

/**
 * _isupper - Checks if an alphabet is uppercase
 * @c: Character to pass to _isupper
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
