#include "main.h"

/**
 * square - finds the roots of a number
 * @n: the number
 * @root: the root tested
 *
 * Return: the natural root of anumber if exists
 *              -1 if it doesn't
*/

int square(int n, int root)
{
        if (root * root == n)
                return (root);
        else if (root * root < n)
                return (square(n, root + 1));
        else
                return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (square(n, 1));
}
