#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Number of integers to be reversed
 */
void reverse_array(int *a, int n)
{
	int i, s[100];

	for (i = 0; i < n; i++)
		s[i] = a[(n - 1) - i];
	for (i = 0; i < n; i++)
		a[i] = s[i];
}
