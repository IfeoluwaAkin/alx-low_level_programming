#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *qwy;
	int r, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	qwy = malloc(sizeof(int) * size);
	if (qwy == NULL)
		return (NULL);
	for (r = 0; min <= max; r++)
		qwy[r] = min++;
	return (qwy);
}
