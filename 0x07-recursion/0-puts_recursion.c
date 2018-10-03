#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: characters being printed
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
	_putchar('\n');
}
