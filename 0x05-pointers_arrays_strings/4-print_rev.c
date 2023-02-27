#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int str = 0;
	int v;

	while (*s != '\0')
	{
		str++;
		v++;
	}
	s--;
	for (v = str; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
