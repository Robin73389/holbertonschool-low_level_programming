#include "function_pointers.h"

/**
 * print_name - my name function
 * @name: my pointer
 * @f: my function of pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
