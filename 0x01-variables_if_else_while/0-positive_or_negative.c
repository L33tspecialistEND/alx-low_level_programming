#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks for the sign of a number
 * @n: Number to be checked
 *
 * Description: Generates a random number prints it
 * stating if it is posite, negative or zero.
 *
 * Return: 0
 */

int main(void)
{
/**
 * @n: Number to generated
 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{	printf("%d is zero\n", n);
	}
	else
	{	printf("%d is negative\n", n);
	}
	return (0);
}
