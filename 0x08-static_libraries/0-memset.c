#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: # of bytes to be filled
 * @b: value of the integer
 * @s: memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
