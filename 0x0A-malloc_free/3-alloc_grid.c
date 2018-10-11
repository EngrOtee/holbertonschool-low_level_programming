#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **twoD, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(char) * height);
	if (twoD == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		twoD[x] = malloc(sizeof(char) * width);
		if (twoD[x] == NULL)
			for (; x >= 0; x -= 1)
			{
				free(twoD[x]);
				free(twoD);
			}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			twoD[x][y] = 0;
	}
	return (twoD);
}
