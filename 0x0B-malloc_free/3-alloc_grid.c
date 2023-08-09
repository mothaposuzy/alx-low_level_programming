#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **all;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	all = malloc(sizeof(int *) * height);

	if (all == NULL)
		return (NULL);

	for (x = 0; x < height; x++)

	{
		all[x] = malloc(sizeof(int) * width);

		if (all[x] == NULL)
		{
			for (; x >= 0; x--)
				free(all[x]);

			free(all);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			all[x][y] = 0;
	}

	return (all);
}

