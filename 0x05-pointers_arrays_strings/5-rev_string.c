#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char str[1000];
	int len, i, j, k;

	len = 0;
	while (len >= 0)
	{
		if (s[len + 1] == '\0')
			break;
		len++;
	}
	for (i = 0; i <= len; i++)
		str[i] = s[len - i];

	j = 0, k = 0;
	while (j >= 0 && k >= 0)
	{
		if (j == (len + 1) && k == (len + 1))
			break;
		s[j] = str[k];
		j++;
		k++;
	}
}
