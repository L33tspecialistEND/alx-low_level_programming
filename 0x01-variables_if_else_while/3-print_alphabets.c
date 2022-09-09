#include <stdio.h>

/**
 * main - Prints alphabets in upper and lower case
 *
 * Return: 0
 */
int main(void)
{
	int alpha = 'a';
	int ALPHA = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');

	return (0);
}
