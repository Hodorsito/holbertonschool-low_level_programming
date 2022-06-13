#include "main.h"

/**
 *  _abs - writes the character to c to stdout
 *
 *  @x: - The character to print
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	if (x == 0)
		return (0);
	if (x >= 0)
		return (x);

return (0);
}
