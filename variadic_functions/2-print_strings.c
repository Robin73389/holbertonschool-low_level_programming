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
	va_list(strings);
	unsigned int i;
	char *string;
	
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && i < n - 1)
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(strings);
}
