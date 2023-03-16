#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two args
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prinf('%d\n', n1 * n2);
	}
	else
	{
		print('Error\n');
		return (1);
	}
	return (0);
}
