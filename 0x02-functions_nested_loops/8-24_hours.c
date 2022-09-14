#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints all the minutes of the day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		printf("%02d:", i);
		for (j = 0; j <= 59; j++)
		{
			printf("%02d\n");
		}
	}
}
