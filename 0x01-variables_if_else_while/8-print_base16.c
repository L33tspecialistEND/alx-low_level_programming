#include <stdio.h>

/**
 * main - Prints base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int hex;

	hex = '0';
	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');

	return (0);
}
