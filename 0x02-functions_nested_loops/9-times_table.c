#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	result = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (result <= 9)
			{
				printf("%d,  ", result);
			}
			else if (result > 9)
			{
				printf("%d, ", result);
			}
			else if (result > 9 && j == 9)
			{
				printf("%d\n", result);
			}
		}
	}
}
