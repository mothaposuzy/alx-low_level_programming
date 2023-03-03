#include "main.h"

/**
 * _strncpy - copies the inputted number
 * of bytes from string src into dest.
 * @dest: stores the copy
 * @src: source of te string
 * @n: the number of bytes to be copied from src
 * Return: the pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		scrlen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = srclen; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
