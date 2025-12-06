#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - This is the name for the my function
 *
 * @head: This is my header
 * @n: This is my data
 * Return: (Newmode)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);

	}
	NewNode->next = *head;
	(*head)->prev = NewNode;
	*head = NewNode;

	return (NewNode);
}
