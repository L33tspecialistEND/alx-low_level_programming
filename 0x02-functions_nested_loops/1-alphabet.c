#include <unistd.h>
#include "main.h"

/**
 * main - Prints alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
