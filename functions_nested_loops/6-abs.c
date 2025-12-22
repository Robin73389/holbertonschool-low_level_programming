#include "main.h"

/**
 * _abs - function which allow the absolute value
 * @x: This is the number
 * Return: (0)
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = (-1 * x);
	}
	putchar(x);
	return (0);
}
