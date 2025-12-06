#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - This is the name for the my function
 *
 * @head: This is my header
 * @n: This is my data
 * Return: (Newmode)
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	dlistint_t *NewNode = malloc(sizeof(dlistint_t));

	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;
	NewNode->prev = temp;

	return (NewNode);
}
