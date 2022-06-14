#include "main.h"
#include <stdio.h>
/**
 *  print_to_98 - writes the character to c to stdout
 *  @n: ajsdjasjd
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
