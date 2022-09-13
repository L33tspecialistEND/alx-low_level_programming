#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints character
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
