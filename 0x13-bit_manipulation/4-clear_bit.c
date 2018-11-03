#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to binary number
 * @index: Index of a given number
 * Return: 1 if program is a success or -1 is fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	set = 1 << index;
	set = ~set;
	*n = (*n & set);
	return (1);
}
