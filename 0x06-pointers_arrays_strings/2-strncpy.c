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
	int a, b;

	for (a = 0, b = 0; b <= n; a++, b++)
		dest[a] = src[b];

	return (dest);
}
