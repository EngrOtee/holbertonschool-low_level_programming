#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *@s: string bring printed in reverse
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a, b, c;

	while (s[c] != '\0')
		c++;

	b = c - 1;

	for (a = 0; a < c; a++)
	{
		r[a] = s[b];
		b--;
	}
	r[a] = '\0';
	_putchar('\n');
}
