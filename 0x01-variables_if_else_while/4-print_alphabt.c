#include <stdio.h>
/**
 * main - Prints the alphabet except e and q
 *
 * Return: 0
 */

int main(void)
{
	int alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);

		if (alpha == 'e' || 'q')
		{
			continue;
		}
	}
	putchar('\n');

	return (0);
}
