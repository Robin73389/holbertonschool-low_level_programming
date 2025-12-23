#include "main.h"

/**
 * puts2 - THis is the name for the function
 * @str: This is the string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
