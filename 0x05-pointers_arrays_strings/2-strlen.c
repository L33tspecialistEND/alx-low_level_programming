#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Variable to store the string
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	
	return (len);
}
