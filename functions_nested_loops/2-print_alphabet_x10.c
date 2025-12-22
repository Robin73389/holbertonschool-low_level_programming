#include "main.h"
/**
 *  print_alphabet_x10 - print 10 times the alphabet
 *
 *  Return: (0)
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	count++;
	}
}
