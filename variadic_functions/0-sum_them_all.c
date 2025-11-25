#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
 unsigned int j;
 unsigned int somme = 0;

if( n == 0)
    return '\0';
    
va_start(ap , n);
for (j = 0; j < n; j++)
{
somme += va_arg(ap, int);
}
va_end(ap);

return (somme);
}
