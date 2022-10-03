#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL or str
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *str;

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;
	j++;
	str = malloc((i + j) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = 0; k < (i + j); l++, k++)
		str[k] = s2[l];

	return (str);
}
