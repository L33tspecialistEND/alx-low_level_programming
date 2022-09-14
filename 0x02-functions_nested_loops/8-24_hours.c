#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints all the minutes of the day
 * @i: Hour of time to be printed
 * @j: Minutes of time to be printed
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		printf("%02d", i);
		while (i <= 23)
		{
			_putchar(':');
			for (j = 0; j <= 59;)
			{
				printf("%02d\n", j);
			}
		}
	}	
}
