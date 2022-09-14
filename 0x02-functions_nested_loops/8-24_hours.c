#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		while (i <= 23)
		{
			for (j = 0; j <= 59;)
			{
				printf("%02d:%02d", i, j);
			}
		}
	}	
}
