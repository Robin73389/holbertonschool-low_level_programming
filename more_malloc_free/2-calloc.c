#include <stdlib.h>
#include "main.h"

/**
 * _calloc - This the name for the function
 * @nmemb: This is the arrays
 * @size: This is the octet
 * Return: (arrays)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arrays;
	unsigned  char *tab;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	arrays = malloc(nmemb * size);
	if (arrays == NULL)
		return (NULL);
	tab = arrays;

	for (i = 0; i < nmemb * size; i++)
		tab[i] = 0;

	return (arrays);
}
