#include "main.h"

/**
 * int factorial - calculates the factorial of a given number.
 * @n: number to calculate the factoral
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
