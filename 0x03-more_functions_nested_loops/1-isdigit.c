#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *@c: number being tested
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar('1');
	}
	else
		return (0);
}
