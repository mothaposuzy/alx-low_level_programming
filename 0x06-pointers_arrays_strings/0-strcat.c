#include "main.h"
#include<stdio.h>

/**
 * _strcat - concatenated 2 strings
 * @dest: destinaton string
 * @src: source string
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[aestlen + i] = src[i];
	return (dest);
}
