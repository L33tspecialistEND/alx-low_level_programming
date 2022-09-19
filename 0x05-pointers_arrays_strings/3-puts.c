#include "main.h"

/**
 * _puts - Prints a string
 * @str: String to be printed
 */
void _puts(char *str)
{
	int len;

	for (len = 0; *(str + len) != '\0'; len++)
	{
		_putchar(*(str + len));
	}
	_putchar('\n');
}
