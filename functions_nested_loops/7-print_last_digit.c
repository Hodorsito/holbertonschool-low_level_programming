#include "main.h"

/**
 *  print_last_digit - writes the character to c to stdout
 *  @c: The character to print
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c > 0)
	{
		_putchar(c + '0');
		return (c);
	}
	if (c == 0)
	{
		_putchar(c + '0');
		return (0);
	}
	if (c < 0)
	{
		_putchar((c * -1) + '0');
		return (c * -1);
	}

return (0);
}
