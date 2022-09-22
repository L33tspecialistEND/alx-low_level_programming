#include "main.h"

/**
 * string_toupper - Changes lowercase letters of a string to uppercase
 * @s: String of letters
 *
 * Return: 0
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (0);
}
