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
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return;
	}

	head = (head)->next;

	if (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}


}
