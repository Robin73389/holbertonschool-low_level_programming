#include "main.h"
/**
 * _puts_recursion - serves a allow the recursion
 * @s: the variable with her containt
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;

	}

		_putchar(*s);
		_puts_recursion(s + 1);
}
