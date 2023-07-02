#include "main.h"
/**
 * print_line- print if the n is less than 0 otherwise print "_"
 * @n:the number of times the character should be print
 */
void print_line(int n)
{
int m;
for (m = 0; m < n; m++)
{
_putchar('_');
}
_putchar('\n');
}
