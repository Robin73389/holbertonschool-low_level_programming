#include "main.h"
/**
 * _strncpy - the name for the function
 * *@dest: used to add characters
 *@src: where we will read the characters
 *@n: the limite max the caractére
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
