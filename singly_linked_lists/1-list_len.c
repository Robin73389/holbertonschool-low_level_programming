#include "lists.h"
#include <stddef.h>

/**
 * list_len - This is the name for the prototype
 * @h: This is my structure
 * Return: cont
 */


size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
