#include"main.h"

/**
 * swap_int - This is the name for the function
 * @a: the caractére
 * @b: the second caractére
 */

void swap_int(int *a, int *b)
{

	int temp = a[0];

	a[0] = b[0];
	b[0] = temp;

}
