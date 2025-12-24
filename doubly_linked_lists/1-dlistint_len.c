#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *	dlistint_len - This is the name for the function
 *
 * @h: This is my setting
 * Return: (count)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}


	return (count);

}
