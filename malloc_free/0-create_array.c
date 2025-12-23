#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * @size: size is the number of cells in the table
 * @c: is the character I want to use
 * Return: (ptr)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
