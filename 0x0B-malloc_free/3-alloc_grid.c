#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that return a pointer to a 2D array of integers
 * @width: integer width
 * @height: integer height
 * Return: a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **wh, n, m;

	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}

	wh = malloc(height * sizeof(*wh));

	if (wh == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		wh[n] = malloc(width * sizeof(**wh));
		if (wh[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(wh[n]);
			free(wh);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			wh[n][m] = 0;
	}
	return (wh);
}
