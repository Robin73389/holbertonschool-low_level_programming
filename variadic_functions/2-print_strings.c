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
	unsigned int i;
	va_list args;
	char *str;



	if (separator == NULL)
		return;

	if (n == '\0')
		printf("(nil)");

	va_start(args, n);

	for (i = 0 ; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str);

		if (i < n - 1)
			printf(",");
	}

	printf("\n");
	va_end(args);
}
