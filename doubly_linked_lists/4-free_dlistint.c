#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - will free every value stock in every chunck of the list h
 *
 * @head: list of type list_t
 *
 * Return: void
 *
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_struct;

	while (head != NULL)
	{
		free_struct = head->next;
		free(head);
		head = free_struct;
	}


}
