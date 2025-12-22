#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This is the name for the function
 * @min: This is the first variable
 * @max: This is the second variable
 * Return: (tab)
 */

int *array_range(int min, int max)
{

	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}