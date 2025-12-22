#include"main.h"
#include<stdio.h>
#include<ctype.h>

/**
 * _isupper - THis is the function which allows the check uppercase caractére
 * @c: This is the caractére
 * Return: (0)
 */


int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}