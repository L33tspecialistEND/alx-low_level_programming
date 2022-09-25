#include "main.h"

/**
 * leet - Encodes a string into leet(1337)
 * @s: String
 *
 * Return: s
 */
char *leet(char *s)
{
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	int sub[6] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;
	while (i < 5)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == lower[i] || s[j] == upper[i])
				s[j] = sub[i];
		}
		i++;
	}

	return (s);
}
