#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to search through
 * @size: size of the array
 * @cmp: function used on the array
 *
 * Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
		if (i == size)
			return (-1);
	}
}
