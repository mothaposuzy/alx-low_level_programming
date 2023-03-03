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
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
