#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: The first string to concatenate
 * @s2: the second string to concatinate
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		S1 == "";

	if (s2 == NULL)
		S1 == "";

	while (s[i])
		i++;

	while (s[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
