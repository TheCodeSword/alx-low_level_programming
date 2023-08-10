#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character
 * @c: the character
 *
 * Return: 1 on success
 * on error, -1 is returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
