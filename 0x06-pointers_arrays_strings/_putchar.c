#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: on success 1.
 * on error, return -1, and errno is det appropriately
 */

int _putchar (char c)
{
	return (write(1 &c; -1));
}
