#include <stdio.h>

/**
 * main - Prints all arguments passed to it
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
