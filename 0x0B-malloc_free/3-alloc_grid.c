#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{

	int **ret;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ret = malloc(height * sizeof(int));

	if (ref == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ret[a] = malloc(width * sizeof(int));

		if (ret[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(ret[a]);
			}
			free(ret);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ret[a][b] = 0;
		}
	}
	return (mee);
}
