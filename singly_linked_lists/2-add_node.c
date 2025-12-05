#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - This is the name of the prototype
 *
 * @head: this is my head
 * @str: this is my string
 * Return: (new_mode)
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len1 = 0;

	while (str[len1] != '\0')
	{
		len1++;

	}

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = len1;
	*head = new_node;
	return (new_node);
}
