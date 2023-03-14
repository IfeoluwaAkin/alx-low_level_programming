#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *vvv;
	int i, s = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	vvv = malloc(sizeof(char) * (i + 1));
	if (vvv == NULL)
		return (NULL);
	for (s = 0; str[s]; s++)
		vvv[s] = str[s];
	return (vvv);
}
