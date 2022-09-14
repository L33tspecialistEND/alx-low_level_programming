#include <stdio.h>
#include "main.h"

/**
 * times_tables - Prints the 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d, ", i * j);
		}
		_putchar('\n');
	}
}
