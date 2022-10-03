#include "main.h"
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

	for (i = 0; str[i] != '\0'; i++)
		;
	str_2 = malloc(i * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		str_2[j] = str[j];

	return (str_2);
}
