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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
