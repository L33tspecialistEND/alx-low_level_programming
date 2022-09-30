#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination to concatenate to
 * @src: Source to concatenate from
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b, c;

	a = 0;
	while (a >= 0)
	{
		if (dest[a + 1] ==  '\0')
			break;
		a++;
	}

	b = 0;
	while (b >= 0)
	{
		if (src[b + 1] == '\0')
			break;
		b++;
	}

	for (c = 0; c <= (b + 1); a++, c++)
		dest[a + 1] = src[c];

	return (dest);
}
