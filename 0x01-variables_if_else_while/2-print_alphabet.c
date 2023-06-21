#include <stdio.h>
/**
 * main - lowercase alphabet
 *
 * Return: always (0)
*/

	int main(void)

	{
		char l = 'a';

		while (l <= 'z')
		{
			putchar(l);
			l++;
		}

		putchar('\n');

		return (0);
	}
