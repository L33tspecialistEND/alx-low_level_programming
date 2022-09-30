#include "main.h"

/**
 * main - Prints the name of the file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		_putchar(argv[i]);
	_putchar('\n');

	return (0);
}
