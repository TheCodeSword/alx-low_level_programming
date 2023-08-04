#include "main.h"

/**
 * test - test if the number is prime number
 * @n: the number
 * @f1: factor 1
 * @f2: factor 2
 *
 * Return: 1 if prime number
 *		0 if not
*/

int test(int n, int f1, int f2)
{
	if (f2 > (n / 2))
		return (1);
	if (f1 * f2 == n || n == 1 || n == 0)
		return (0);
	else if (f1 * f2 < n)
		return (test(n, f1 + 1, f2));
	else if (f1 * f2 > n)
		return (test(n, 2, f2 + 1));
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
	return (test(n, 2, 2));
}
