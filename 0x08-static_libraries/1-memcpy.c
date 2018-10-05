#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - copies memory area
 * @dest: the destination
 * @src: source
 * @n: number of bytes to copy
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		dest[n - 1] = src[n - 1];
		n--;
	}
	return (dest);
}
