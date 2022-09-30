#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 0; i < argc; i++)
		sum += i;
	printf("%d\n", sum);

	return (0);
}
