#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int myInt = 0;

	while (myInt <= 9)
	{
		putchar(myInt + '0');
		myInt++;
	}
	putchar('\n');

	return (0);
}
