#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the area of memory
 * @b: the character to be filled
 * @n: the number of locations to be filled
 *
 * Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
		s[itr] = b;
	return (s);
}
