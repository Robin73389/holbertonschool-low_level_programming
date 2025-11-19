#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - the name fort function
 * @array: the pointeur
 * @size: the size is the size of array
 * @action: the pointer
 * Return: 0;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)

		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
