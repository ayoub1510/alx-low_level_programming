#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - the number is positive, negative or zero
 * Return: always (0)
*/
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	printf("Last digit of %d is %d ", n, z);
	if (z > 5)
	{
		printf("and is greater than 5");
	}
	if (z == 0)
	{
		printf("and is 0");
	}
	if (z < 6 && z != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
