#include "main.h"
#include <ctype.h>

/**
 * _isdigit - This is the function which allows check for digit
 *@c: This is the digit
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
