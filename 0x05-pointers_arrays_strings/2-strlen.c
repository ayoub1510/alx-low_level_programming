#include "main.h"
/**
 *_strlen(char *s)- function that returns the length of a string
 * @s: the char
 * Return: b
 */
int _strlen(char *s)
{
int b;
for (b = 0; s[b] != '\0'; ++b)
	;
return (b);
}
