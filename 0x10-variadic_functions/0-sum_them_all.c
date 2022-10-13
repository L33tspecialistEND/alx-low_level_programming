#include <stdard.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum integers passed the func
 * @n: Number of arguments passed
 *
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i;
	int sum;

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
