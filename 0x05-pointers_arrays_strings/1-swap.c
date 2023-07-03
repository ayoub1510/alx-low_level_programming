#include "main.h"
/**
 * swap_int - swapthe values of two integers
 * @a: Pointer of value 98
 * @b: Pointer of value 42
 * Return: voi
 */

void swap_int(int *a, int *b)
{

	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
