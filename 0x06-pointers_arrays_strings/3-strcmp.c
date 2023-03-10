#include "main.h"
/**
 * _strcmp - compare pointers of 2 strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: if str1 < str2, the negative difference of the first
 * unmatched characters.
 * if str1 ==str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	char *s1 = 'Hello';
	char *s2 = 'World';

	if (*s1 == *s2)
		s1++;

	return (*s1 - *s2);
}
