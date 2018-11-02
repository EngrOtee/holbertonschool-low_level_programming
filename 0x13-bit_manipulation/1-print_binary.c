#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number being converted into binary representation
 * Return: The binary representation or 0 if n is null
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	return;
	}
	else
	{
		print_binary(n >> 1);
		n = n & 1;
		_putchar(n + '0');
	}
}
