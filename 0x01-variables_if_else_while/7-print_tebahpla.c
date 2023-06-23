#include <stdio.h>
/**
 * main - reverse alphabet
 *
 * Return: always 0
*/
int main(void)
{
	 int letter;

	for  (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}

