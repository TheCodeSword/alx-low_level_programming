#include "variadic_functions.h"

/**
 * sum_them_all - sums all variable arguments
 * @n: number of args
 * @...: the integers
 *
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
