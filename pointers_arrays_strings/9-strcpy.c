#include <stdio.h>
#include "main.h"
/**
 * _strcpy - the name for the function
 * @dest: the variable where are im going past the contenu for src
 * @src: this is the string main
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
	{
		return (0);
	}

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
