#include <stdlib.h>
#include <time.h>
/**
 * main - Numbers 
 *
 * Return: Always 0 (Success)
*/
   
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ) {
	printf("n is positive\n" );
}

printf("value of n is  : %d\n" );

	return (0);
}
