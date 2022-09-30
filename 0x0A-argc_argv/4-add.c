#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, add;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (argv[i] < 48 || argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}

	}

	add = 0;
	for (i = 1; i < argc; i++)
		add += atoi(argv[i]);
	printf("%d\n", add);

	return (0);
}
