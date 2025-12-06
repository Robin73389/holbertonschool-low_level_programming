#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - will free every value stock in every chunck of the list h
 *
 * @head: list of type list_t
 *
 * Return: void
 */


void free_dlistint(dlistint_t *head)
{
    if (head->next == NULL)
    {
        free(head);
        head = NULL;

        return;
    }
}