#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @str: The string toget the length of
 * Return: the length of @str.
 */

size_t_strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
