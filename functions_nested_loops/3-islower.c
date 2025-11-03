#include"main.h"
/**
 * _islower - write a function that checks for lowercase character
 *
 * @c: int majuscule in ascii
 *
 * Return: (1) if maj nor (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else

		return (0);

}
