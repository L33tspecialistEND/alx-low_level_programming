#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers 0 to 9
 * @c: Number passed to loop in function
 */
int main(void)
{
	return (0);
}
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
