#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if upper, 0 if lower
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delemiter
 * @c: character
 * Return: 1 if delemiter, 0 if not
*/

int is Delimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize words in string
 * @s: input string
 * Return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*S) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
		{
			foundDelimiter = 0;
		}
		s++;
	}
	return (ptr);
}
