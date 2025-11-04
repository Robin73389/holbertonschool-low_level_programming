#include "main.h"
/**
 * string_toupper - this is function who transform characters in capital
 * @str: this is the setting for the function
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a'  && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return (str);
}
