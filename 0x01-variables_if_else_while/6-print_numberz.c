#include <stdio.h>

/**
 * main - Prints numbers 0-9
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = '0';
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
