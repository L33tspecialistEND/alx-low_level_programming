#include "main.h"

/*
 * _strpbrk - Searches a string for any one character in a set
 * @s: String
 * @accept: Set of characters
 *
 * Return: s + i
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
		}
		if (k == 0)
			break;
	}
	return (s + i);
}
