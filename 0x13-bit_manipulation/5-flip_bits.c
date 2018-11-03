#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you need to flip
 * @n:Input
 * @m:Input
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int set;
	int i;

	set = (m ^ n);
	i = 0;
	while (set)
	{
		if (set & 1)
			i++;
		set = set >> 1;
	}
	return (i);
}
