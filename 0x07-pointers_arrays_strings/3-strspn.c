#include "main.h"

/**
 * _strspn - Prints the length of a prefix substring
 * @s: String
 * @accept: Substring
 *
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len = 0;
				break;
			}
		}
		if (len == 1)
			break;
	}
	return (i);
}
