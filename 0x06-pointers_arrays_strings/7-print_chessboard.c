#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 *@a: the array printed
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int x, b, c;

	c = 0;
	while (a[c][c])
		c++;
	c -= 1;
	for (x = 0; x < c; x++)
	{
		for (b = 0; b < c; b++)
			_putchar(a[x][b]);
		_putchar('\n');
	}
}
