#include "main.h"

/**
 * test - test if the number is prime number
 * @n: the number
 * @f: factor
 *
 * Return: 1 if prime number
 *		0 if not
*/

int test(int n, int f)
{
	if (f >= n && n >= 2)
		return (1);
	if (n % f == 0 || n <= 1)
		return (0);
	else
		return (test(n, f + 1));
}

/**
 * is_prime_number - tests if a number is prime
 * @n: the number
 *
 * Return: 1 if the number is prime
 *		0 otherwise
*/

int is_prime_number(int n)
{
	return (test(n, 2));
}
