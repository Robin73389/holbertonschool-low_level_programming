#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 *@dest: used to add characters
 *@src: where we will read the characters
 *@n: the limite max the caractére
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
