#include <unistd.h>

/**
 * _putchar - prints a character c to the stdout
 * @c: character to be printed
 * Return: on sucess 1
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
