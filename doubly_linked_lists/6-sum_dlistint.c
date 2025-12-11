#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - This the for the function which
 * is used to sum of all the data linked list
 *
 * @head: This is my pointer who point toward struct
 * Return: (sum)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
