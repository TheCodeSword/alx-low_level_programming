#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        char small = 'a';
	char cap = 'A';

        while (small <= 'z')
        {
                putchar(small);
                small++;
        }
	while (cap <= 'Z')
        {
                putchar(cap);
                cap++;
        }
        putchar('\n');

        return (0);
}
