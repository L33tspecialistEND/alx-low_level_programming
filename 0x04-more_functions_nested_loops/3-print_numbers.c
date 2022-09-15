#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 * @c: Number passed to loop in function
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
