#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 *	allocated space in memory, which contains a copy of
 *	the string given as a parameter
 * @str: string given as parameter
 *
 * Return: NULL if failed to allocate or string is empty
 *	pointer if successful
*/

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	n = malloc(size * sizeof(*str) + 1);

	if (size == 0 || n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
