#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Bit taken as input
 * @index: The given index
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	i = n >> index;
	j = i & 1;
	return (j);
}
