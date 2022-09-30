#include <stdio.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 or 1
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int mul;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	mul = argv[1] * argv[2];
	printf("%d\n", mul);
}
