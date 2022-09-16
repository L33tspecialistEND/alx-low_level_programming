#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes charcter c to standard output
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
