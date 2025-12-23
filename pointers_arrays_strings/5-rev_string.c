#include"main.h"
#include<string.h>

/**
 * rev_string - This is the name for the function
 * @s: This is the string
 */
void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
		_putchar(s[i]);
	}

	for (j = i - 1; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
