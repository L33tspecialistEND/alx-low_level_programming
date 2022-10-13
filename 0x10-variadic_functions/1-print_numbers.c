#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: String printed between numbers
 * @n: Number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), *separator);
		printf("%d", va_arg(ap, int));
		printf("\n");
	}
	va_end(ap);
}
