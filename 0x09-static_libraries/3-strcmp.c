#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 or j
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (i >= 0)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			j = s1[i] - s2[i];

			return (j);
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}

	return (0);
}
