#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * @dest: destination string
 * @src: source string
 * Return: the destination string
 */

char *_strncat(char *dest, char *src)
{
	int dest = 0;
	int srclen = 0;
	int i;


	for (i = 0; dest[i] != '\0'; i++)
		dest++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen' i++)
		dest[destlen + i] = src[i];
	return (dest);

}
