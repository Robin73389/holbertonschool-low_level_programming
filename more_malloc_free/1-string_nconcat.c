#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - This is the name for the function
 * @s1: This is the first string
 * @s2: This is the seconde string
 * @n: This is the number
 * Return: (res)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	res = malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (j = 0; j < n; j++)
		res[len1 + j] = s2[j];

	res[len1 + n] = '\0';

	return (res);
}
