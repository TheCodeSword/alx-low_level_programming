#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0,1, ..9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int myInt = 0;

	while (myInt <= 9)
	{
		putchar(myInt + 48);

		if (myInt != 9)
		{
			putchar(',');
			putchar(' ');
		}
		myInt++;
	}
	putchar('\n');

	return (0);
}
