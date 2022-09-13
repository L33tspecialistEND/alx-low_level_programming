#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers up t 98, from back and front
 * @n: Number to pass to the function
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		else if (n < 98)
		{
			for (; n < 98; n++)
			{
				printf("%d, ", n);
			}
		}
	}
	printf("%d, ", n);
}
