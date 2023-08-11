#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the smallest value
 * @max: the highest value
 *
 * Return: array of integers if success
 *	NULL if malloc fails or min > max
*/

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
