#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: the matrix
 *@size: size of the matrix
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x, y, total1 = 0, total2 = 0;

	for (x = 0; x < (size * size); x += (size + 1))
		total1 += a[x];
	for (y = (size - 1); y < ((size * size) - 1); y += (size - 1))
		total2 += a[y];
	printf("%d, %d\n", total1, total2);
}
