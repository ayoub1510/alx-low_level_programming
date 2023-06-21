#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main	- the entry point of code
 *description:	n is negative or positive
 *Returne:	always (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	if (n > 0)
	{

	printf("%d is positive\n", n);

	return (0);

	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	else
	printf("%d is zero\n", n);

	return (0);

