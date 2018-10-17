#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * checker - checks if string is palindrome
 *@s: string being evaluated
 *@len: highest index of string
 *@a: lowest index of string
 * Return: 1 if true, 0 if not
 */

int checker(char *s, int len, int a)
{
	if (len <= a)
		return (1);
	if (s[len] != s[a])
		return (0);
	return (checker(s, len - 1, a + 1));
}

/**
 * is_palindrome - checks if string is palindrome
 *@s: string being evaluated
 * Return: 1 if true, otherwise 0
 */

int is_palindrome(char *s)
{
	int len,  b;

	if (s[0] == '\0')
		return (1);
	len = _strlen_recursion(s);
	b = checker(s, len - 1, 0);
	return (b);
}
