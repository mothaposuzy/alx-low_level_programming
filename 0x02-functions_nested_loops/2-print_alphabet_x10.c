#include "main.h"

/**
 * print_alphabet_x10  - print 10 times the alphabet, in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{
	int i;

	char j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putcha(j);
		_putchar ('\n');
	}
}
