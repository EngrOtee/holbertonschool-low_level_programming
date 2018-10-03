#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *@s: characters being counted
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	if (s[1] == '\0')
		return (1);
	else
		return (_strlen_recursion(&s[1]) + 1);
}
