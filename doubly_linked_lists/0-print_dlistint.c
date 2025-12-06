#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - This is the name for the function
 *
 * @h: This is my setting
 * Return: (count)
 */

size_t print_dlistint(const dlistint_t *h)
{

	size_t count = 0;
	const dlistint_t *temp = h;

	printf("Liste de transfert\n");

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
		
	}
	

	return (count);
}
