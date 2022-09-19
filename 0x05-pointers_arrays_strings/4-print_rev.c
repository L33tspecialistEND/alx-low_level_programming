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
	for (; *(s + len) != 0; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
