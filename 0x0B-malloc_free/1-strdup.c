#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Duplicates a string
 * @str: String
 *
 * Return: NULL or str_2
 */
char *_strdup(char *str)
{
	int i, j;
	char *str_2;
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	str_2 = malloc((i + 1) * sizeof(char));
	if (str_2 == NULL)
		return (NULL);

	for (j = 0; j < (i + 1); j++)
		str_2[j] = str[j];

	return (str_2);
}
