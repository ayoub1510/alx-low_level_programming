#include "main.h"
/**
  * main - the entry point of code
  * Return: Always 0
  */
int main(void)
{
	int i = 0;
	char array[8] = "_putchar";

	while (i < 8)
	{
		_putchar (array[i]);
		i++;
	}
	_putchar ('\n');
	return (0);
}
