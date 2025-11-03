#include"main.h"
/**
 * reverse_array - that's the name of the function
 * @a: is my first strings
 * @n: is my second strings
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
}	}
