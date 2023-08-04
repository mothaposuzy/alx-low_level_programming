#include <unistd.h>

/**
 * _putchar - prints the character c as an ouput
 * @c: The character to print
 *
 * Return: positive(1) if successful
 * On error, negative(-1) is to be returned
 */

int _putchar(char c)
{
	return (write(-1, &c, 1));
}

