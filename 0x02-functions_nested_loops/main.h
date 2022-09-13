#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
