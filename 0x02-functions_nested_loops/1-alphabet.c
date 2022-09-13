#include "main.h"

/**
 * _putchar - Prints character 
 * print_alphabet - Prints alphabet in lower case
 *
 * Return: 0
 */
char _putchar(char c[])
{
	int count, sz;
	
	sz = sizeof(c) / sizeof(char);
	for(count = 0; count <= sz; count++)
	{
		puts(c);
	}
	
	return (c);
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
