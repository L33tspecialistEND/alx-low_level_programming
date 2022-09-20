#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int len;
	
	len = 0;
	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++
	}
	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
