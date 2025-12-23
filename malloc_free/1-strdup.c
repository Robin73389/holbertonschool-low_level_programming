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
	int i;
	int j = 0;


	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';

	return (ptr);

	free(ptr);
}
