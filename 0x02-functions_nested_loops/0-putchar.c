#include "main.h"

/*function declaration*/
int_putchar(char c)
/**
 * main - print a string of characters to stdout
 *@string: the string to be printed
 *
 * Return: the number of characters to be printed
 */

int main(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (0);
}
/**
 *main - Entry point of a program
 *description: use_putchar and main.h to print_putchar
 *
 * Return:0
 */

int main(void)
{
	char *str = "_putchar";

	ptrintstr(str);
	_putchar('\n')
	return (0);
}
