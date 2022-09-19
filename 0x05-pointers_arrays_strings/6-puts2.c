#include "main.h"

/**
 * puts2 - Prints every other caracter in a string
 * @str: Parameter passed to function
 */
void puts2(char *str)
{
	int len, count;

	for (count = 0; *(str + count) != '\0'; count++)
	{
	}
	for (len = 0; len <= count; len++)
	{
		if (len % 2 != 0)
		{
			continue;
		}
		_putchar(*(str + len));
	}
	_putchar('\n');
}
