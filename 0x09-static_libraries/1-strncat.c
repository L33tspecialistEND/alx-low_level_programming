#include "main.h"

/**
 * _strncat - Concatenates n characters from source to destination
 * @dest: Destination to concatenate to
 * @src: Source to concatenate from
 * @n: Number of characters to concatenate
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (a >= 0)
	{
		if (dest[a + 1] == '\0')
			break;
		a++;
	}
	if (n > a)
	{
		for (b = 0; b < a; a++, b++)
			dest[a + 1] = src[b];
	}
	for (b = 0; b < n; a++, b++)
		dest[a + 1] = src[b];

	return (dest);
}
