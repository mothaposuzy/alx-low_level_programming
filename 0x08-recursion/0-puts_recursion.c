#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new
 * line.
 * @s: string to print
 * return: 0 sucess
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
