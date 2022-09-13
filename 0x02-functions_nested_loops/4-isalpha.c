#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Number to pass to _isalpha function
 *
 * Return: 0
 */
int _isalpha(int c)
{
	while (c >= 65)
	{
		if (c <= 90)
		{
			return (1);
		}
		else if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
