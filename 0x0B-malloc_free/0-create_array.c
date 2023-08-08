#include "main.h"

/**
 * create_array - creates an array of chars
 *		and initializes it with a specific char
 * @size: array length
 * @c: the character
 *
 * Return: Null if size is zero or failed to allocate
 *	pointer to array if sucessful
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
