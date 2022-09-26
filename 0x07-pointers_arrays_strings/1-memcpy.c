#include "main.h"

/*
 * _memcpy - Copies n characters from source to destiation
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
