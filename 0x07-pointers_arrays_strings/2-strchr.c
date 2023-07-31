#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string it searches in
 * @c: the character to be searched
 *
 * Return: a pointer to the fisrt occurrence to the character c in string s
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
			return (s + itr);
	}
	return ('\0');
}
