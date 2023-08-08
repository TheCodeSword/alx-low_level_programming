#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: Null on failure
 *	pointer to the concatenated string if success
*/

char *str_concat(char *s1, char *s2)
{
	int size = 0,
		size1 = 0,
		size2 = 0,
		i = 0,
		j = 0;
	char *n;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[size1] != '\0')
	{
		if (s1 == NULL)
			break;
		size1++;
	}

	while (s2[size2] != '\0')
	{
		if (s2 == NULL)
			break;
		size2++;
	}
	size = size1 + size2;

	n = malloc(size * sizeof(*s1) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size1; i++)
		{
			if (s1 == NULL)
				break;
			n[i] = s1[i];
		}

		for (; j < size2; j++)
		{
			if (s2 == NULL)
				break;
			n[i + j] = s2[j];
		}
	}
	return (n);
}
