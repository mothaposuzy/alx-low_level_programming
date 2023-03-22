#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size:  is the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: index of the first element
 *       : If no element matches, return -1
 *         If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
}
