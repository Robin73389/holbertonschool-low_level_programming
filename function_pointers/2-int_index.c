#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - the  name for the function
 * @array: this is pointer
 * @cmp: this is cmp
 * @size: the size of the arraing
 * Return: (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)

		return (0);


	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);

		}
	}
	return (-1);
}
