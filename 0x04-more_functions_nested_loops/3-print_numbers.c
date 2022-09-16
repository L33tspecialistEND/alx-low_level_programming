#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 * @c: Number passed to loop in function
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
