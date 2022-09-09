#include <stdio.h>

/**
 * main - Prints the alphabet in reverse order
 *
 * Return: 0
 */
int main(void)
{
	int alpha;

	alpha = 'z';
	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
