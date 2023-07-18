#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all hexadecimal single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int myInt = 48;

	while (myInt <= 102)
	{
		putchar(myInt);

		if (myInt == 57)
			myInt += 39;
		myInt++;
	}
	putchar('\n');

	return (0);
}
