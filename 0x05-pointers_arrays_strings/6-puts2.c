#include "main.h"

/**
 * puts2 - Prints every other caracter in a string
 * @str: Parameter passed to function
 */
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (len >= 0)
	{
		if (str[len + 1] == '\0')
			break;
		len++;
	}
	for (i = 0; i <= len; len++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
