#include "main.h"

/**
 * cap_string - Capitalizes the words in a string
 * @s: String
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		if (s[i] == ' ' || s[i] == '"' || s[i] == '(' || s[i] == '{' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		if (s[i] == ',' || s[i] == ';')
		{
			if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] = s[i + 2] - 32;
		}
		if (s[i] == '!' || s[i] == '?')
		{
			if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] = s[i + 2] - 32;
		}
		if (s[i] == '.')
		{
			if ((s[i + 1] >= 97 && s[i + 1] <= 122) && (s[i + 2] >= 97 &&
			s[i + 2] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			else if (s[i + 2] >= 97 && s[i + 2] <= 122)
				s[i + 2] = s[i + 2] - 32;
		}
		i++;
	}

	return (s);

}
