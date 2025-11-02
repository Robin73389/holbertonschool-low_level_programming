#include "main.h"


void puts_half(char *str)
{
	int len = 0, start;


	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start  = (len - 1) / 2;

	while (str[start] != '\0')
	{	_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
