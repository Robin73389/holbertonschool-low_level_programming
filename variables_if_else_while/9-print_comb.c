#include<stdio.h>

int main (void)
{	
	int x;

	for ( x = 0; x <= 9; x++)
	{	
		putchar(x + '0');
	
		if ( x < 9)	
		{
			putchar(44);
			putchar(32);
		}
	}
	
	putchar('\n');
	return (0);
}
