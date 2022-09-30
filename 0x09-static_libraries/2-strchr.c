#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: s + i
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == '\0')
			return (NULL);
	}
}
