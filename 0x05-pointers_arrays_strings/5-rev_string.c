#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char *str;
	int len, count;

	str = s;
	for (count = 0; *(str + count) != '\0'; count++)
	{
	}
	for (len = 0; count >= 0; len++, count--)
	{
		*(s + len) = *(str + count);
	}

}
