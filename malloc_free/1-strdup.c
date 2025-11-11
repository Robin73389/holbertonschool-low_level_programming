#include "main.h"
#include <stdlib.h>
/**
 * _strdup - used to copy
 * @str: this is my string
 * Return: copie
 */
char *_strdup(char *str)
{
	char *copie;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	copie = malloc((i + 1) * sizeof(char));

	while (str[j] != '\0')
	{
		copie[j] = str[j];
		j++;
	}

	return (copie);
}
