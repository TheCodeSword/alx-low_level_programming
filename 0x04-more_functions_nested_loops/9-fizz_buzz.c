#include "main.h"

/**
 * main - print numbers 1- 100 followed by a new line
 *	numbers that are multiples of 3 print Fizz
 *	numbers that are multiples of 5 print Bizz
 *	numbers that are multiples of 3 and 5 print FizzBizz
 *	each number and word to be separated by space
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBizz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");

		if (num != 100)
			printf(" ");
		else
			printf("\n");

	}
	return (0);
}
