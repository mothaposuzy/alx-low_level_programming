#include "main.h"

/**
 * _puts_recursion - prints a string
 * followed by a new line.
 * @s: string to print.
 * return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n);
	}
	_puts_recursion(s);
	s++;

	_putchar(*s);
}
