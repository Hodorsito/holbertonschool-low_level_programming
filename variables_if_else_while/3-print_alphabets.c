#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char f;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (f = 'A'; f <= 'Z'; f++)
	{
	putchar(f);
	}
	putchar('\n')
	return (0);
}
