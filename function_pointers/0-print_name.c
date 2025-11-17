#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - my name function
 * @name: my pointer
 * @f: my function of pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
