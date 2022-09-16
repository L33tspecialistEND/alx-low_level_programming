#include "main.h"
#include <unistd.h>

/**
 * print_line - Prints underscore character n times
 * @n: Parameter to pass to loop in function
 */
int main(void)
{
	print_line(3);
	return (0);
}
void print_line(int n)
{
	int i;

	if (n <= 48)
	{
		_putchar('\n');
	}
	for (i = 49; i == n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
