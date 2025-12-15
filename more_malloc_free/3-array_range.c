#include "main.h"
#include <stdio.h>
#include <stdlib.h>*

/**
 * array_range - This is the name for the function
 * @min: This is the first variable
 * @max: This is the second variable
 * Return: (tab)
 */

int *array_range(int min, int max)
{

	int size;
	int *tab;
	int i;


	if (min > max)
		return (NULL);

	size = min - max + 1;

	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (0);

	for (i = 0; i < size; i++)
		tab[i] = min + i;

	return (tab);

}
