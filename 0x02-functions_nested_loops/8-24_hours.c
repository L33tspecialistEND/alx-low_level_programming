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
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
		}
	}	
}
