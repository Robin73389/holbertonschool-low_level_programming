#include"main.h"
#include<stdio.h>

/**
 * _puts - This is the name for the function puts
 * @str: This is the arrays
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
