#include "main.h"
/**
 * print_square- a square, followed by a new line.
 *@size: ahsen size f el3alam.
 */
void print_square(int size)
{
int b, i;

for (b = 0; b < size; b++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
	_putchar('\n');
}
