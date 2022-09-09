#include <stdio.h>

/**
 * main - Prints numbers 0-9
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}
