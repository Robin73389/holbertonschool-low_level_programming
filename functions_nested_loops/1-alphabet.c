#include "main.h"
/**
 *  main - print the alphabet
 *
 *  Return: always (0)
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
