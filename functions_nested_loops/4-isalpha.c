#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *  _isalpha - writes the character to c to stdout
 *  @c: The character to print
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
