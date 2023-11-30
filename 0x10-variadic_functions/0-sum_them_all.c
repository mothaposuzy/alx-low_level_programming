#include "variadic_functions.h"

/**
* sum_them_all - sum of all parameters passed.
* @n: the number of arguments to be passed.
* Return: sum
*/

int sum_them_all(const unsigned int n, ...);
{
	unsigned int sum = 0;
	unsigned int i;

	va_list temp;

	va_start(temp, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(temp, const unsigned int);
		}
		va_end(temp);
		return (sum);
}
