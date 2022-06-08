#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = 48; g <= 57; g++)
	{
		putchar(g);
		if (g != 57)
		{	
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

