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
		n[src] = n[dest];
		n--;
	}
	return (dest);
}
