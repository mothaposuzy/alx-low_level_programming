#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

un
signed int _strspn(char *s, char *accept)
{
	unsgned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; n++)
	{
		check = 0;
		for (n = 0; accept[n] == s[i])
		{
			value++;
			check = 1;
		}
	}
}
