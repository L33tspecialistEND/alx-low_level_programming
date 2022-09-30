#include "main.h"

/**
 * _memset - Fills n bytes of a string with a constant character
 * @s: String
 * @b: Character
 * @n: Number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
