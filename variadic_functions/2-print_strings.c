#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - This is the function used to display a string
 *@separator: This is the ","
 *@n: This is the string
 *Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	if (n == NULL)
	{
		printf("(nil)");
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
