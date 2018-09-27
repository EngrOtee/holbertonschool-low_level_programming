#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 *@dest: destination
 *@src: source
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)

		for (j = 0; src[j] != '\0'; j++)
		{
			src[i] = dest[j];
			i++;
		}
	dest[i] = src[j];
	return (dest);


}
