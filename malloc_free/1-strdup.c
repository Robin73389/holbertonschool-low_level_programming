#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - used to copy
 * @str: this is my string
 * Return: copie
 */
char *_strdup(char *str)
{
	char *ptr;


	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = strdup(str);

	return (ptr);
}
