#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');

		_putchar(',');
		_putchar(' ');
	}

	_putchar('\n');



}
