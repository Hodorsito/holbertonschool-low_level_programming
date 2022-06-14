#include "main.h"

/**
 *  times_table - writes the character to c to stdout
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int j, i;
	int m;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = j * i;

			if (m <= 9)
			{
				if (i == 0)
					_putchar(m + '0');
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
			}
			if (m > 9)
			{
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (i == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}




