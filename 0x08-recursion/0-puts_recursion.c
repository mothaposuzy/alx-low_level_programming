#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new
 * line.
 * @s: string to print
 * return: 0 sucess
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return ();
	}
	_putchar(s);
	s++;

	-puts_recursion(s);
}
