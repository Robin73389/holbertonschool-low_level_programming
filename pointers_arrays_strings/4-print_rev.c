#include"main.h"
#include<string.h>

/**
 * print_rev - This is the name for the function
 * @s: This is the string
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
