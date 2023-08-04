#include "main.h"

/**
 * _puts - function
 * @s: pointer
 *
 * Return: void
*/

void _puts(char *s)
{
	do {
		_putchar(*s);
		s++;
	} while (*s != '\0');
	_putchar('\n');
}
