#include"main.h"

void print_most_numbers(void)
{	
	int n = 48;
	while(n <= 57)
	{	
		if( n != '2' && n != '4')	
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
