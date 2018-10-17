#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 *@s: String that is tested
 *@accept: bytes checked
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, a = 1;
	unsigned int count = 0;

	while (s[i] != '\0' && a == 1)
	{
		a = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				a = 1;
				break;
			}
		}
		i++;
	}
	return (count);
}
