#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a+= 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');'
}
