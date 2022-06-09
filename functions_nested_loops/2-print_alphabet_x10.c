#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 */
void print_alphabet_x10(void)
{
	char i = 0;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

