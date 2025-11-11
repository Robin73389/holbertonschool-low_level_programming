#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * @size: size is the number of cells in the table
 * @c: is the character I want to use
 * Return: (tableau)
 */
char *create_array(unsigned int size, char c)
{
	char *tableau = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (tableau == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		tableau[i] = c;
	}
	return (tableau);
}
