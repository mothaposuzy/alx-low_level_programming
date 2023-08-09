#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, xi;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s1 = "";

	i = xi = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[xi] != '\0')
		xi++;

	concat = malloc(sizeof(char) * (i + xi + 1));

	if (concat == NULL)
		return (NULL);

		while (s1[i] != '\0')
		{
			concat[i] = s1[i];
			i++;
		}

		while (s2[xi] != '\0')
		{
			concat[xi] = s2[xi];
			i++, xi++
		}

		concat[i] = '\0';
		return (concat);

}
