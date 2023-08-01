#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 *			square matrix of integers
 * @a: the array of arrays
 * @size: size of the square side of the array of arrays
 *
 * Return none
*/

void print_diagsums(int *a, int size)
{
	int itr, sum1 = 0, sum2 = 0;

	for (itr = 0; itr < size; itr++)
	{
		sum1 += a[itr];
		sum2 += a[size - itr - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
