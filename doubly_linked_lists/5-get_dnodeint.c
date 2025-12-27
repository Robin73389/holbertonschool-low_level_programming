#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - This is the name for the my function
 * @head: This is my header
 * @index: This is my variable for go the n node
 * Return: (get_dnodeint_at_index(head->next, index - 1))
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int count = 0;

	while (count < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		count++;
		head = head->next;
	}

	return (head);

}
