#include "main.h"
#include <stdlib.h>
/**
 * int **alloc_grid - the name the function
 * @width: This is for the columns
 * @height: this is for the long
 * Return: tableau
 */
int **alloc_grid(int width, int height)
{	int j = 0;
	int i = 0;
	int **tableau;

	if (width <= 0 || height <= 0)
		return (NULL);

	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
		return (NULL);

	while (i < height)
	{
		tableau[i] = malloc(width * sizeof(int));
		if (tableau[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(tableau[i]);
			}
			free(tableau);
			return (NULL);
		}

		while (j < width)
		{
			tableau[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tableau);


}
