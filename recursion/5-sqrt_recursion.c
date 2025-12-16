#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_helper - This is the name for the function
 * @x: this is the number
 * @n: This is the name racine carré
 * Return: (_sqrt_helper)
*/
int _sqrt_helper(int n, int x)
{

	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - This is the name for the function
 *
 * _sqrt_helper - This is the name for the function
 *
 * @n: This is the name racine carré
 * Return: (sqrt_recursion)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
