#include "main.h"

int _abs(int x)
{	
	int y = (x >> 31);
	return (x ^ y) - y;
}
