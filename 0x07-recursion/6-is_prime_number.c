#include "holberton.h"
#include <stdio.h>

/**
* prime - checks whether a number is prime or not prime
*@x: number being tested
*@y: number being tested
* Return: the function prime
*/
int prime(int x, int y)
{
	if (x < 2)
		return (0);
	if (x / 2 < y)
		return (1);
	if (x % y == 0)
	{
		return (0);
	}
	return (prime(x, y + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number
*@n: number being tested
* Return: Always 0.
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
