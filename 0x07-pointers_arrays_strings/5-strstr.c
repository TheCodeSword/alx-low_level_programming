#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the string to be matched
 *
 * Return: pointer to the beginning of the located substring
 *	NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int itr, jtr = 0;

	for (itr = 0; haystack[itr] != '\0'; itr++)
	{
		if (haystack[itr] == needle[jtr])
		{
			jtr++;
			continue;
		}
		if (haystack[itr] != needle[jtr])
		{
			jtr = 0;
			continue;
		}
	}
	if (jtr != 0)
		return (haystack + jtr);
	else
		return ('\0');
}
