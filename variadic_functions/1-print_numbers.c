#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - This is the name for the my function
 *@separator: This is the comma
 *@n: This is the number
 *Return: (0);
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}

	printf("\n");
	va_end(args);

}
