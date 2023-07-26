#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - defermines if it's a printable character in ASCII
 * @n: integer
 * Return: 1 if it's printable, 0  if not
*/

int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: stiring to print
 * @start: starting with position
 * @end: endline positioning
*/

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii for string b
 * formatted to replace printable characters with '.'.
 * @b: string to print
 * @start: starting position
 * @end: ending position
 * Return: no return
*/

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("n");
}
