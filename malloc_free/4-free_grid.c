#include "main.h"
#include <stdlib.h>


void free_grid(int **grid, int height)
{	
	int i = 0;

	if (grid == NULL)
		return;

	while (i < height)
	{	
		free(grid[i]);
		i++;
	}	
	free(grid);
}

