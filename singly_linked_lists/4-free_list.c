#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - will free every value stock in every chunck of the list h
 *
 * @head: list of type list_t
 *
 * Return: void
 */


void free_list(list_t *head)
{

		if (head->next == NULL)
		{
			free(head);
			head = NULL;

			return;
		}


}
