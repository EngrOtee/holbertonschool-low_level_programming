#include "holberton.h"

/**
 * _strstr - finds the first occurrence of substring
 * @haystack: the string to be analyzed
 * @needle: the string to be found
 * Return: a pointer to the substring beginning
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, point = 0;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
					point = 1;
				else
					point = 0;
			}
		}
		if (point == 1)
			return (haystack + i);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
