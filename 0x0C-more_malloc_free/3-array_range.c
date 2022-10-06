#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum integer
 * @max: Maximum integer
 *
 * Return: NULL or arr
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		;
	arr = malloc(i * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
