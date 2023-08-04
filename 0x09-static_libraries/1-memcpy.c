#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the area where the memory would be copied to
 * @src: pointer to the area that will be copied
 * @n: the number of bytes to be copied.
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
		dest[itr] = src[itr];
	return (dest);
}
