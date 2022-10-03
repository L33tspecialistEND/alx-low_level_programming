#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates a specified array with a specific character
 * @size: Size of the array
 * @c: Character
 *
 * Return: NULL or ch
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ch;

	ch = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
