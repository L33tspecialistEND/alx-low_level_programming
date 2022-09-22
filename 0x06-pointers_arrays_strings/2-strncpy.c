#include "main.h"

/**
 * _strncpy - Copies n characters from source to destination
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: Number of characters to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	a = 0;
	while (a >= 0)
	{
		if (src[a + 1] == '\0')
			break;
		a++;
	}

	if (n <= a)
	{
		for (b = 0, c = 0; c <= n; b++, c++)
			dest[b] = src[c];
	}
	else if (n > a)
	{
		for (b = 0, c = 0; c <= a; b++, c++)
		{
			dest[b] = src[c];
		}
		for (; (a + 1) <= n; a++)
			dest[a + 1] = '\0';
	}

	return (dest);
}
