#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 *@n: number being tested
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (1);
	return (prime(n, 0));
}

int prime(int n)
{
	if (n % 2 == 1)
		return (1);
	else if 
	else
		return (0);
}
