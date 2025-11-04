#include "main.h"
#include<stdio.h>
/**
 * print_array - the name at the function
 * @a: the variable who pointe toward the adresse
 * @n: the variable who contains they caractére a display
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{	printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

		i++;
	}

	printf("\n");
}
