#include "main.h"

/**
 * print_alphabet_x10 -print 10 times the aphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int count;

	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar ('\n');
	}
}
