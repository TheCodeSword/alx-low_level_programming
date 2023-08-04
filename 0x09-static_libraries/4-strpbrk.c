#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched
 * @accept: the string that its bytes will be matched
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *	NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != '\0'; jtr++)
		{
			if (s[itr] == accept[jtr])
				return (s + itr);
		}
	}
	return ('\0');
}
