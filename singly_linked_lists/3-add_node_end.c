#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_the_node - This is the name of the prototype
 *
 * @head: this is my head
 * @str: this is my string
 * Return: (element)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *element;
	unsigned int len1 = 0;
	element = malloc(sizeof(list_t));
	
	while (str[len1] != '\0')
	{
		len1++;

	}
	element->str = strdup(str);
	element->next = NULL;
	element->len = len1;

	while (str[len1] != '\0')
	{
		len1++;

	}
	if (element == NULL)
	{
		printf("Erreur\n");
		exit(EXIT_FAILURE);
	}
	temp = *head;

	if (*head == NULL)
	{
		*head = element;
		return (element);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = element;

	return (element);

}
