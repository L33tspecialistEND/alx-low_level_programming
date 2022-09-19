#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	{
	}
	for (; ; len--)
	{
		if (len < 0)
		{
			break;
		}
		_putchar(*(s + len));
	}
	_putchar('\n');
}
