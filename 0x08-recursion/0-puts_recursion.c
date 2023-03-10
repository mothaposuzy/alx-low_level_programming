#include "main.h"

/**
 * puts_recursion - prints a string, followed by a new
 * line.
 * @s: the string to print.
 * Return: nothing
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
