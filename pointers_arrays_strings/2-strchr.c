#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: pointer to the string
 * @c: character to find
 * Return: pointer to the file
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)

			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
