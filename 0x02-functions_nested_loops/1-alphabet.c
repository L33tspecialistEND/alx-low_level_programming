#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case
 *
 * Description: Prints letters a to z in lower case format
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
