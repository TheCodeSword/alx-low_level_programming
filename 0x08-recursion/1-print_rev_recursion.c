#include "main.h"

/**
 * _print_rev_recursion - prints string reversed
 * @s: pointer to the first character in the string
 *
 * Return: none
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
