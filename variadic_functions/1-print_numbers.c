#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This is the name for the my function
 *
 * @separator: This is the comma
 * @n: This is the number
 * Return: (0);
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	   printf ("%d", va_arg(args, const unsigned int));
		printf ("%s", separator);
	}
	printf("\n");
	va_end(args);


	return;

}
