#include "main.h"

/**
 * _isupper - check if the character is uppercase.
 * @c: input character.
 * Return: If it an uppercase character return 1, others 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
