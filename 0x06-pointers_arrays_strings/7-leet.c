#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @b: input value
 * Return: b
 */
char *leet(char *b)
{
	int n, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; b[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (b[n] == s1[m])
			{
				b[n] = s2[m];
			}
		}
	}
	return (b);
}
