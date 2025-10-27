#include"main.h"

void print_alphabet_x10(void)
{	
	char letters;
	int numbers;
	for(numbers = 1; numbers <= 10; numbers++)
	{
	
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
	_putchar('\n');
	}
}
