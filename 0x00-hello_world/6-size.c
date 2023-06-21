#include <stdio.h>
/**
*main - entry point
*description: the function is size of
*Return: always 0
*/
int main(void)
{
	char	a;
	int	y;
	float	o;
	long int	u;
	long long	b;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", sizeof(u));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(o));
	return (0);
}
