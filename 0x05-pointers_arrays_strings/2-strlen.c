#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int str  = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}

	return (str);
}
