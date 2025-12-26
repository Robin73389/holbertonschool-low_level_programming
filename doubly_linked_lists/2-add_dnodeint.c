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

	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	newnode->next = *head;

	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);

}
