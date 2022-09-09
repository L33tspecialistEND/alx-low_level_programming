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
		if (alpha == 'e')
		{
			continue;
		}
		if (alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
