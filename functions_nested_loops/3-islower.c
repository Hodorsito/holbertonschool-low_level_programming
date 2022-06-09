#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - Entry point
 */
int _islower(void)
{
	int c = 'c';

	if (_islower(c))
	{
		printf("c = |%c| _islower\n", c);
		return (1);
	}


	return (0);
}
