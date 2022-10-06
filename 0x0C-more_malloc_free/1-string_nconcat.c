#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of s2
 *
 * Return: NULL or s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, a, b;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		str[a] = s1[a];
	for (b = 0; a < i + j; a++, b++)
		str[a] = s2[b];
	str[i + j] = '\0';

	return (str);
}
