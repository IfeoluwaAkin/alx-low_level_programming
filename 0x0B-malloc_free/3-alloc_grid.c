#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: null if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **vee;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	vee = malloc(sizeof(int *) * height);
	if (vee == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		vee[a] = malloc(sizeof(int) * width);
		if (vee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(vee[a]);
			free(vee);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			vee[a][b] = 0;
	}
	return (vee);
}
