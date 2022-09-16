#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		i++;
		for (j = 48; j <= 62; j++)
		{
			if (j >= 58)
			{
				_putchar(j / 58);
			}
			_putchar(j % 48);
		}
		_putchar('\n');
	}
}
