#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of cmd arguements
 * @argv: pointer to array of arguements
 *
 * Return: 0 at success, non-zero for failure
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
