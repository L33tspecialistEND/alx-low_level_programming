#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	void print_alphabet(void);
	{
		for(letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}

	return (0);
}
